# Spy-Name-Generator-Website
This project features a Spy Name Generator Testing Framework, designed to evaluate the correctness of various implementations of a spy_name_generator function. While the website does not currently generate spy names for user input, it serves as a powerful testing tool to debug and validate the function across multiple scenarios. The website is hosted on the UVM silk server and is accessible at [Spy Name Generator Testing Website](https://knpike.w3.uvm.edu/Testing-Website-knpike/test_cases.html).

The site allows users to upload a test_cases.cpp file to evaluate how well their implementation of spy_name_generator handles predefined test cases. It runs automated checks against a set of both correct and deliberately buggy implementations, providing feedback on whether all errors were successfully identified. Over 20 incorrect versions of the function are tested to ensure thorough debugging and validation. It does not yet allow for user input of their birth month and first intial and return their spy name.

This project integrates multiple technologies, including HTML, CSS, and PHP for the website interface, Python for automated testing, and C++ for the core implementations. Hosting is managed through the UVM silk server.

To use, prepare a test_cases.cpp file containing your test cases. Visit the website and upload your file. Results on the bugs you caught  are displayed directly on the webpage for easy review.

Example Output:
File uploaded!

Found bugs: [1, 2, 3, 4, 6, 7, 8, 9, 10, 12, 13, 14, 15, 17]

Unfound bugs: [5, 11, 16, 18, 19, 20]


This project was created by Kayli Pike as part of a class curriculum, with guidance from Prof. Lisa Dion. The testing framework and website design were inspired by class materials. The spy names were implemented based on the chart found here: https://www.facebook.com/DisneyPlusAU/posts/mighty-pigeon-here-reporting-for-dutywhats-your-spy-name-tell-us-belowspies-in-d/359877318704520/.

For questions or feedback, contact knpike@uvm.edu.
