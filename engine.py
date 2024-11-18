import subprocess
from subprocess import Popen, PIPE, check_output
import sys

# Get the command-line argument for the number of incorrect implementations
num_incorrect = int(sys.argv[1])

# Get the token and check if it matches
file = open("test_cases.cpp", "r")
# Changed the token on the next line to my token.
# Recorded token in Gradescope submission.
if file.readline().strip() != "// goodluck":
    # The token does not match. Print HTML message and exit.
    print("<p>You do not have the secret token. Do not pass Go. Do not collect $200.</p>")
    file.close()
    raise SystemExit
file.close()

# Compile testing file
try:
    # This is Python's way of calling the command line. We use it to compile the C++ files.
    subprocess.check_output(["gcc -std=c++1y -c test_cases.cpp"],stdin=None,stderr=subprocess.STDOUT,shell=True)
except subprocess.CalledProcessError as e:
    # There were compiler errors in test_cases.cpp. Print out the error message and exit the program.
    print("<p>",e.output,"</p>")
    raise SystemExit
# Link the testing file with the correct implementation's object file to produce an executable.
# Compile the correct implementation into an object file. Hint: copy the try/except block above and change test_cases.cpp to your file name
try:
    # This is Python's way of calling the command line. We use it to compile the C++ files.
    subprocess.check_output(["gcc -std=c++1y -c spy_name_generator_correct.cpp"],stdin=None,stderr=subprocess.STDOUT,shell=True)
except subprocess.CalledProcessError as e:
    # There were compiler errors in spy_name_generator_correct.cpp. Print out the error message and exit the program.
    print("<p>",e.output,"</p>")
    raise SystemExit
# Changed triangle_type to my function name to create the executable file
subprocess.call('g++ -o correct.out test_cases.o spy_name_generator_correct.o', stdin=None, stdout=None, stderr=None, shell=True)

# Link the testing file with each incorrect implementation's object file to produce an executable.
for i in range(num_incorrect):
    # Compile the incorrect implementations into object files. Hint: copy the try/except block above and change test_cases.cpp to the incorrect implementation file names like the line below.
    incorrect_file = f"spy_name_generator_incorrect{i+1}.cpp"
    try:
        # This is Python's way of calling the command line. We use it to compile the C++ files.
        subprocess.check_output(["gcc", "-std=c++1y", "-c", incorrect_file], stderr=subprocess.STDOUT)
    except subprocess.CalledProcessError as e:
        # There were compiler errors. Print out the error message and exit the program.
        print("<p>",e.output,"</p>")
        raise SystemExit
    # Changed triangle_type to my function name
    subprocess.call('g++ -o incorrect'+str(i+1)+'.out test_cases.o spy_name_generator_incorrect'+str(i+1)+'.o', stdin=None, stdout=None, stderr=None, shell=True)

# Create lists for found and unfound bugs
found_bug = []
unfound_bug = []

# Store the correct implementation's output in result
p = Popen(['./correct.out'], shell=True, stdout=PIPE, stdin=PIPE)
result = p.stdout.read()

# For each incorrect implementation, compare its output to result.
for i in range(num_incorrect):
    pi = Popen(['./incorrect'+str(i+1)+'.out'], shell=True, stdout=PIPE, stdin=PIPE)
    resulti = pi.stdout.read()
    if result == resulti:
        # If the outputs match, the bug was not found.
        unfound_bug += [i + 1]
    else:
        # If the outputs do not match, the bug was found.
        found_bug += [i + 1]

# Print results to HTML
print("<p>Found bugs:")
print(found_bug)
print("</p><p>")
print("Unfound bugs:")
print(unfound_bug)
print("</p>")
