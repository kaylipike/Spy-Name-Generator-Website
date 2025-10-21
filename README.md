# Spy Name Generator Testing Framework

**Author:** Kayli Pike

**Live Site:** [Spy Name Generator Testing Website](https://knpike.w3.uvm.edu/Testing-Website-knpike/test_cases.html)

---

## Overview

This project features a Spy Name Generator Testing Framework, designed to evaluate the correctness and robustness of different implementations of a `spy_name_generator` function.
While the website does not currently generate spy names for user input, it serves as a powerful testing platform that validates the function’s behavior across multiple scenarios and identifies logical or implementation errors automatically.

The website is hosted on the UVM Silk Server and built using a combination of web and systems programming languages to connect testing logic with an accessible browser interface.

---

## How It Works

Users can upload a `test_cases.cpp` file to the site. The framework then:

1. Runs automated checks using both correct and intentionally buggy implementations of the `spy_name_generator` function.
2. Compares the output of the user’s test cases against expected results.
3. Reports which bugs were successfully detected and which were missed.

Over 20 buggy versions of the function are tested to ensure comprehensive debugging and validation coverage.

---

## Technologies Used

* **HTML, CSS, PHP** – Website structure, styling, and server-side upload handling
* **Python** – Automated testing and comparison logic
* **C++** – Core function implementations and test case logic
* **UVM Silk Server** – Hosting and server environment

---

## Using the Framework

1. Prepare a `test_cases.cpp` file containing your custom test cases for the `spy_name_generator` function.
2. Visit the hosted website and upload your file.
3. The framework will automatically compile and test your code against multiple implementations.
4. Review the results displayed directly on the webpage.

**Example Output:**

```
File uploaded!

Found bugs: [1, 2, 3, 4, 6, 7, 8, 9, 10, 12, 13, 14, 15, 17]
Unfound bugs: [5, 11, 16, 18, 19, 20]
```

---

## Implementation Details

* The spy names follow the chart provided by Disney+ on Facebook:
  [Spy Name Chart Reference](https://www.facebook.com/DisneyPlusAU/posts/mighty-pigeon-here-reporting-for-dutywhats-your-spy-name-tell-us-belowspies-in-d/359877318704520/)
* The website currently focuses on testing rather than generating spy names directly from user input (e.g., birth month and first initial).
* Future enhancements may include live spy name generation through interactive forms.

---

## Author Contributions

* **Developed:** The correct implementation and 20 intentionally incorrect versions of `spy_name_generator`.
* **Created:** The `test_cases.cpp` file used for validation.
* **Integrated:** All implementations into the testing framework provided by the course.

Starter code and project guidance were provided by Professor Lisa Dion.

---

## Contact

For questions, suggestions, or feedback, please reach out:
**[knpike@uvm.edu](mailto:knpike@uvm.edu)**

---

**© 2024 Kayli Pike**
