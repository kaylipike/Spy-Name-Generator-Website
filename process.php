<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="utf-8">
        <!-- Updated the author -->
        <meta name="author" content="Kayli Pike">
        <title>Testing!</title>
        <!-- Updated the description -->
        <meta name="description" content="This page is for checking the robustness of and testing a spy name generator function in C++.">
        <link href="style.css" rel="stylesheet" type="text/css" media="screen" />
    </head>
    <body>
    	<header>
    		<h1>CS 2300</h1>
    		<h2>Testing Practice</h2>
    		<!-- Changed this h3 to my function name -->
    		<h3>Spy Name Generator Function</h3>
    	</header>
        <?php
        
        // Changed the 26 in the next line since I have a different number of incorrect implementations
        define("NUM_OF_INCORRECT_IMPLS", 20);
        
        $file_name = basename($_FILES["test-cases"]["name"]);
        if ($file_name != "test_cases.cpp") {
            // The file name does not match. They submitted the wrong file.
            echo "Wrong file name. You submitted " . $file_name . ". Please submit test_cases.cpp.";
        } else {
            // Create a folder for the user where the processing will take place. It will be named a random number (so that it's different for each submission).
            $rand_number = rand();
            while (file_exists($rand_number)) {
                $rand_number = rand();
            }
            $command_mkdir = escapeshellcmd("mkdir " . $rand_number);
            $output_mkdir = shell_exec($command_mkdir);
            // Copy the files into the folder.
            
            // Added all correct and incorrect function implementation cpps here, in the next line
            // NOTE: the asterisk here is a wildcard symbol, meaning that this command will copy all files whose names begin with "triangle_type"
            $output_cp = shell_exec("cp spy_name_generator* " . $rand_number);
            $command_cp2 = escapeshellcmd("cp engine.py " . $rand_number);
            $output_cp2 = shell_exec($command_cp2);
            
            // Copy the user-uploaded file into the folder.
            if (move_uploaded_file($_FILES["test-cases"]["tmp_name"], $rand_number . "/" . $file_name)) {
                echo "<p>File uploaded!</p>";
                // Go into the folder, run the Python file, then go out of the folder.
                // Note that the Python file has a command-line argument of the number of incorrect implementations.
                $output = shell_exec("cd " . $rand_number . ";chmod +x engine.py;python engine.py " . NUM_OF_INCORRECT_IMPLS . ";cd ..");
                // Print the output from the Python program to the webpage.
                echo $output;
                // Delete the folder
                array_map("unlink", glob($rand_number . "/*"));
                rmdir($rand_number);
            } else {
                echo "Unable to upload file. ";
                print_r($_FILES);
            }
        }
        ?>
    </body>
</html>
