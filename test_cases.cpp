// goodluck
#include <iostream>
using namespace std;

/**
* Spy Name Generator function
* Requires: user birth month and first initial
* Modifies: nothing
* Effects: Returns the user's spy name.
*/
string spy_name_generator(int birth_month, char first_initial);

/* Returns true if it passes all test cases
 * and false if it fails at least one test case
 */
bool test_spy_name();

int main() {
    if (test_spy_name()) {
        cout << "Passed all test cases" << endl;
    }
    return 0;
}

bool test_spy_name() {
    bool passed = true;

    // Tests for January
    if (spy_name_generator(1, 'A') != "Fast Fly") {
        cout << "FAILED test case 1, 'A'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'B') != "Fast Thunder") {
        cout << "FAILED test case 1, 'B'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'C') != "Fast Night") {
        cout << "FAILED test case 1, 'C'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'D') != "Fast Pigeon") {
        cout << "FAILED test case 1, 'D'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'E') != "Fast Rock") {
        cout << "FAILED test case 1, 'E'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'F') != "Fast Bird") {
        cout << "FAILED test case 1, 'F'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'G') != "Fast Arrow") {
        cout << "FAILED test case 1, 'G'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'H') != "Fast Laser") {
        cout << "FAILED test case 1, 'H'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'I') != "Fast Storm") {
        cout << "FAILED test case 1, 'I'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'J') != "Fast Lightning") {
        cout << "FAILED test case 1, 'J'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'K') != "Fast Claw") {
        cout << "FAILED test case 1, 'K'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'L') != "Fast Steel") {
        cout << "FAILED test case 1, 'L'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'M') != "Fast Ultra") {
        cout << "FAILED test case 1, 'M'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'N') != "Fast Gem") {
        cout << "FAILED test case 1, 'N'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'O') != "Fast Agent") {
        cout << "FAILED test case 1, 'O'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'P') != "Fast 'X''") {
        cout << "FAILED test case 1, 'P'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'Q') != "Fast Commander") {
        cout << "FAILED test case 1, 'Q'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'R') != "Fast Marshall") {
        cout << "FAILED test case 1, 'R'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'S') != "Fast Sky") {
        cout << "FAILED test case 1, 'S'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'T') != "Fast Gadget") {
        cout << "FAILED test case 1, 'T'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'U') != "Fast Power") {
        cout << "FAILED test case 1, 'U'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'V') != "Fast Mac") {
        cout << "FAILED test case 1, 'V'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'W') != "Fast Degree") {
        cout << "FAILED test case 1, 'W'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'X') != "Fast Walter") {
        cout << "FAILED test case 1, 'X'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'Y') != "Fast Lance") {
        cout << "FAILED test case 1, 'Y'" << endl;
        passed = false;
    }

    if (spy_name_generator(1, 'Z') != "Fast Falcon") {
        cout << "FAILED test case 1, 'Z'" << endl;
        passed = false;
    }

    // Tests for February
    if (spy_name_generator(2, 'A') != "Neo Fly") {
        cout << "FAILED test case 2, 'A'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'B') != "Neo Thunder") {
        cout << "FAILED test case 2, 'B'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'C') != "Neo Night") {
        cout << "FAILED test case 2, 'C'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'D') != "Neo Pigeon") {
        cout << "FAILED test case 2, 'D'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'E') != "Neo Rock") {
        cout << "FAILED test case 2, 'E'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'F') != "Neo Bird") {
        cout << "FAILED test case 2, 'F'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'G') != "Neo Arrow") {
        cout << "FAILED test case 2, 'G'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'H') != "Neo Laser") {
        cout << "FAILED test case 2, 'H'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'I') != "Neo Storm") {
        cout << "FAILED test case 2, 'I'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'J') != "Neo Lightning") {
        cout << "FAILED test case 2, 'J'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'K') != "Neo Claw") {
        cout << "FAILED test case 2, 'K'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'L') != "Neo Steel") {
        cout << "FAILED test case 2, 'L'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'M') != "Neo Ultra") {
        cout << "FAILED test case 2, 'M'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'N') != "Neo Gem") {
        cout << "FAILED test case 2, 'N'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'O') != "Neo Agent") {
        cout << "FAILED test case 2, 'O'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'P') != "Neo 'X''") {
        cout << "FAILED test case 2, 'P'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'Q') != "Neo Commander") {
        cout << "FAILED test case 2, 'Q'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'R') != "Neo Marshall") {
        cout << "FAILED test case 2, 'R'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'S') != "Neo Sky") {
        cout << "FAILED test case 2, 'S'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'T') != "Neo Gadget") {
        cout << "FAILED test case 2, 'T'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'U') != "Neo Power") {
        cout << "FAILED test case 2, 'U'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'V') != "Neo Mac") {
        cout << "FAILED test case 2, 'V'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'W') != "Neo Degree") {
        cout << "FAILED test case 2, 'W'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'X') != "Neo Walter") {
        cout << "FAILED test case 2, 'X'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'Y') != "Neo Lance") {
        cout << "FAILED test case 2, 'Y'" << endl;
        passed = false;
    }

    if (spy_name_generator(2, 'Z') != "Neo Falcon") {
        cout << "FAILED test case 2, 'Z'" << endl;
        passed = false;
    }

    // Tests for March
    if (spy_name_generator(3, 'A') != "Silent Fly") {
        cout << "FAILED test case 3, 'A'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'B') != "Silent Thunder") {
        cout << "FAILED test case 3, 'B'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'C') != "Silent Night") {
        cout << "FAILED test case 3, 'C'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'D') != "Silent Pigeon") {
        cout << "FAILED test case 3, 'D'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'E') != "Silent Rock") {
        cout << "FAILED test case 3, 'E'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'F') != "Silent Bird") {
        cout << "FAILED test case 3, 'F'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'G') != "Silent Arrow") {
        cout << "FAILED test case 3, 'G'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'H') != "Silent Laser") {
        cout << "FAILED test case 3, 'H'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'I') != "Silent Storm") {
        cout << "FAILED test case 3, 'I'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'J') != "Silent Lightning") {
        cout << "FAILED test case 3, 'J'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'K') != "Silent Claw") {
        cout << "FAILED test case 3, 'K'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'L') != "Silent Steel") {
        cout << "FAILED test case 3, 'L'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'M') != "Silent Ultra") {
        cout << "FAILED test case 3, 'M'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'N') != "Silent Gem") {
        cout << "FAILED test case 3, 'N'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'O') != "Silent Agent") {
        cout << "FAILED test case 3, 'O'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'P') != "Silent 'X''") {
        cout << "FAILED test case 3, 'P'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'Q') != "Silent Commander") {
        cout << "FAILED test case 3, 'Q'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'R') != "Silent Marshall") {
        cout << "FAILED test case 3, 'R'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'S') != "Silent Sky") {
        cout << "FAILED test case 3, 'S'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'T') != "Silent Gadget") {
        cout << "FAILED test case 3, 'T'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'U') != "Silent Power") {
        cout << "FAILED test case 3, 'U'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'V') != "Silent Mac") {
        cout << "FAILED test case 3, 'V'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'W') != "Silent Degree") {
        cout << "FAILED test case 3, 'W'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'X') != "Silent Walter") {
        cout << "FAILED test case 3, 'X'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'Y') != "Silent Lance") {
        cout << "FAILED test case 3, 'Y'" << endl;
        passed = false;
    }

    if (spy_name_generator(3, 'Z') != "Silent Falcon") {
        cout << "FAILED test case 3, 'Z'" << endl;
        passed = false;
    }

    // Tests for April
    if (spy_name_generator(4, 'A') != "Diamond Fly") {
        cout << "FAILED test case 4, 'A'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'B') != "Diamond Thunder") {
        cout << "FAILED test case 4, 'B'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'C') != "Diamond Night") {
        cout << "FAILED test case 4, 'C'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'D') != "Diamond Pigeon") {
        cout << "FAILED test case 4, 'D'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'E') != "Diamond Rock") {
        cout << "FAILED test case 4, 'E'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'F') != "Diamond Bird") {
        cout << "FAILED test case 4, 'F'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'G') != "Diamond Arrow") {
        cout << "FAILED test case 4, 'G'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'H') != "Diamond Laser") {
        cout << "FAILED test case 4, 'H'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'I') != "Diamond Storm") {
        cout << "FAILED test case 4, 'I'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'J') != "Diamond Lightning") {
        cout << "FAILED test case 4, 'J'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'K') != "Diamond Claw") {
        cout << "FAILED test case 4, 'K'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'L') != "Diamond Steel") {
        cout << "FAILED test case 4, 'L'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'M') != "Diamond Ultra") {
        cout << "FAILED test case 4, 'M'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'N') != "Diamond Gem") {
        cout << "FAILED test case 4, 'N'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'O') != "Diamond Agent") {
        cout << "FAILED test case 4, 'O'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'P') != "Diamond 'X''") {
        cout << "FAILED test case 4, 'P'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'Q') != "Diamond Commander") {
        cout << "FAILED test case 4, 'Q'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'R') != "Diamond Marshall") {
        cout << "FAILED test case 4, 'R'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'S') != "Diamond Sky") {
        cout << "FAILED test case 4, 'S'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'T') != "Diamond Gadget") {
        cout << "FAILED test case 4, 'T'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'U') != "Diamond Power") {
        cout << "FAILED test case 4, 'U'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'V') != "Diamond Mac") {
        cout << "FAILED test case 4, 'V'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'W') != "Diamond Degree") {
        cout << "FAILED test case 4, 'W'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'X') != "Diamond Walter") {
        cout << "FAILED test case 4, 'X'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'Y') != "Diamond Lance") {
        cout << "FAILED test case 4, 'Y'" << endl;
        passed = false;
    }

    if (spy_name_generator(4, 'Z') != "Diamond Falcon") {
        cout << "FAILED test case 4, 'Z'" << endl;
        passed = false;
    }

    // Tests for May
    if (spy_name_generator(5, 'A') != "Glitter Fly") {
        cout << "FAILED test case 5, 'A'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'B') != "Glitter Thunder") {
        cout << "FAILED test case 5, 'B'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'C') != "Glitter Night") {
        cout << "FAILED test case 5, 'C'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'D') != "Glitter Pigeon") {
        cout << "FAILED test case 5, 'D'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'E') != "Glitter Rock") {
        cout << "FAILED test case 5, 'E'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'F') != "Glitter Bird") {
        cout << "FAILED test case 5, 'F'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'G') != "Glitter Arrow") {
        cout << "FAILED test case 5, 'G'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'H') != "Glitter Laser") {
        cout << "FAILED test case 5, 'H'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'I') != "Glitter Storm") {
        cout << "FAILED test case 5, 'I'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'J') != "Glitter Lightning") {
        cout << "FAILED test case 5, 'J'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'K') != "Glitter Claw") {
        cout << "FAILED test case 5, 'K'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'L') != "Glitter Steel") {
        cout << "FAILED test case 5, 'L'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'M') != "Glitter Ultra") {
        cout << "FAILED test case 5, 'M'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'N') != "Glitter Gem") {
        cout << "FAILED test case 5, 'N'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'O') != "Glitter Agent") {
        cout << "FAILED test case 5, 'O'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'P') != "Glitter 'X''") {
        cout << "FAILED test case 5, 'P'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'Q') != "Glitter Commander") {
        cout << "FAILED test case 5, 'Q'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'R') != "Glitter Marshall") {
        cout << "FAILED test case 5, 'R'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'S') != "Glitter Sky") {
        cout << "FAILED test case 5, 'S'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'T') != "Glitter Gadget") {
        cout << "FAILED test case 5, 'T'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'U') != "Glitter Power") {
        cout << "FAILED test case 5, 'U'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'V') != "Glitter Mac") {
        cout << "FAILED test case 5, 'V'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'W') != "Glitter Degree") {
        cout << "FAILED test case 5, 'W'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'X') != "Glitter Walter") {
        cout << "FAILED test case 5, 'X'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'Y') != "Glitter Lance") {
        cout << "FAILED test case 5, 'Y'" << endl;
        passed = false;
    }

    if (spy_name_generator(5, 'Z') != "Glitter Falcon") {
        cout << "FAILED test case 5, 'Z'" << endl;
        passed = false;
    }

    // Tests for June
    if (spy_name_generator(6, 'A') != "Starling Fly") {
        cout << "FAILED test case 6, 'A'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'B') != "Starling Thunder") {
        cout << "FAILED test case 6, 'B'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'C') != "Starling Night") {
        cout << "FAILED test case 6, 'C'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'D') != "Starling Pigeon") {
        cout << "FAILED test case 6, 'D'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'E') != "Starling Rock") {
        cout << "FAILED test case 6, 'E'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'F') != "Starling Bird") {
        cout << "FAILED test case 6, 'F'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'G') != "Starling Arrow") {
        cout << "FAILED test case 6, 'G'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'H') != "Starling Laser") {
        cout << "FAILED test case 6, 'H'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'I') != "Starling Storm") {
        cout << "FAILED test case 6, 'I'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'J') != "Starling Lightning") {
        cout << "FAILED test case 6, 'J'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'K') != "Starling Claw") {
        cout << "FAILED test case 6, 'K'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'L') != "Starling Steel") {
        cout << "FAILED test case 6, 'L'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'M') != "Starling Ultra") {
        cout << "FAILED test case 6, 'M'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'N') != "Starling Gem") {
        cout << "FAILED test case 6, 'N'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'O') != "Starling Agent") {
        cout << "FAILED test case 6, 'O'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'P') != "Starling 'X''") {
        cout << "FAILED test case 6, 'P'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'Q') != "Starling Commander") {
        cout << "FAILED test case 6, 'Q'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'R') != "Starling Marshall") {
        cout << "FAILED test case 6, 'R'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'S') != "Starling Sky") {
        cout << "FAILED test case 6, 'S'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'T') != "Starling Gadget") {
        cout << "FAILED test case 6, 'T'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'U') != "Starling Power") {
        cout << "FAILED test case 6, 'U'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'V') != "Starling Mac") {
        cout << "FAILED test case 6, 'V'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'W') != "Starling Degree") {
        cout << "FAILED test case 6, 'W'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'X') != "Starling Walter") {
        cout << "FAILED test case 6, 'X'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'Y') != "Starling Lance") {
        cout << "FAILED test case 6, 'Y'" << endl;
        passed = false;
    }

    if (spy_name_generator(6, 'Z') != "Starling Falcon") {
        cout << "FAILED test case 6, 'Z'" << endl;
        passed = false;
    }

    // Tests for July
    if (spy_name_generator(7, 'A') != "Shadow Fly") {
        cout << "FAILED test case 7, 'A'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'B') != "Shadow Thunder") {
        cout << "FAILED test case 7, 'B'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'C') != "Shadow Night") {
        cout << "FAILED test case 7, 'C'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'D') != "Shadow Pigeon") {
        cout << "FAILED test case 7, 'D'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'E') != "Shadow Rock") {
        cout << "FAILED test case 7, 'E'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'F') != "Shadow Bird") {
        cout << "FAILED test case 7, 'F'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'G') != "Shadow Arrow") {
        cout << "FAILED test case 7, 'G'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'H') != "Shadow Laser") {
        cout << "FAILED test case 7, 'H'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'I') != "Shadow Storm") {
        cout << "FAILED test case 7, 'I'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'J') != "Shadow Lightning") {
        cout << "FAILED test case 7, 'J'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'K') != "Shadow Claw") {
        cout << "FAILED test case 7, 'K'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'L') != "Shadow Steel") {
        cout << "FAILED test case 7, 'L'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'M') != "Shadow Ultra") {
        cout << "FAILED test case 7, 'M'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'N') != "Shadow Gem") {
        cout << "FAILED test case 7, 'N'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'O') != "Shadow Agent") {
        cout << "FAILED test case 7, 'O'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'P') != "Shadow 'X''") {
        cout << "FAILED test case 7, 'P'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'Q') != "Shadow Commander") {
        cout << "FAILED test case 7, 'Q'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'R') != "Shadow Marshall") {
        cout << "FAILED test case 7, 'R'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'S') != "Shadow Sky") {
        cout << "FAILED test case 7, 'S'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'T') != "Shadow Gadget") {
        cout << "FAILED test case 7, 'T'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'U') != "Shadow Power") {
        cout << "FAILED test case 7, 'U'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'V') != "Shadow Mac") {
        cout << "FAILED test case 7, 'V'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'W') != "Shadow Degree") {
        cout << "FAILED test case 7, 'W'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'X') != "Shadow Walter") {
        cout << "FAILED test case 7, 'X'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'Y') != "Shadow Lance") {
        cout << "FAILED test case 7, 'Y'" << endl;
        passed = false;
    }

    if (spy_name_generator(7, 'Z') != "Shadow Falcon") {
        cout << "FAILED test case 7, 'Z'" << endl;
        passed = false;
    }

    // Tests for August
    if (spy_name_generator(8, 'A') != "Salt Fly") {
        cout << "FAILED test case 8, 'A'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'B') != "Salt Thunder") {
        cout << "FAILED test case 8, 'B'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'C') != "Salt Night") {
        cout << "FAILED test case 8, 'C'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'D') != "Salt Pigeon") {
        cout << "FAILED test case 8, 'D'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'E') != "Salt Rock") {
        cout << "FAILED test case 8, 'E'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'F') != "Salt Bird") {
        cout << "FAILED test case 8, 'F'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'G') != "Salt Arrow") {
        cout << "FAILED test case 8, 'G'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'H') != "Salt Laser") {
        cout << "FAILED test case 8, 'H'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'I') != "Salt Storm") {
        cout << "FAILED test case 8, 'I'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'J') != "Salt Lightning") {
        cout << "FAILED test case 8, 'J'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'K') != "Salt Claw") {
        cout << "FAILED test case 8, 'K'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'L') != "Salt Steel") {
        cout << "FAILED test case 8, 'L'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'M') != "Salt Ultra") {
        cout << "FAILED test case 8, 'M'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'N') != "Salt Gem") {
        cout << "FAILED test case 8, 'N'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'O') != "Salt Agent") {
        cout << "FAILED test case 8, 'O'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'P') != "Salt 'X''") {
        cout << "FAILED test case 8, 'P'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'Q') != "Salt Commander") {
        cout << "FAILED test case 8, 'Q'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'R') != "Salt Marshall") {
        cout << "FAILED test case 8, 'R'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'S') != "Salt Sky") {
        cout << "FAILED test case 8, 'S'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'T') != "Salt Gadget") {
        cout << "FAILED test case 8, 'T'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'U') != "Salt Power") {
        cout << "FAILED test case 8, 'U'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'V') != "Salt Mac") {
        cout << "FAILED test case 8, 'V'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'W') != "Salt Degree") {
        cout << "FAILED test case 8, 'W'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'X') != "Salt Walter") {
        cout << "FAILED test case 8, 'X'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'Y') != "Salt Lance") {
        cout << "FAILED test case 8, 'Y'" << endl;
        passed = false;
    }

    if (spy_name_generator(8, 'Z') != "Salt Falcon") {
        cout << "FAILED test case 8, 'Z'" << endl;
        passed = false;
    }

    // Tests for September
    if (spy_name_generator(9, 'A') != "Icy Fly") {
        cout << "FAILED test case 9, 'A'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'B') != "Icy Thunder") {
        cout << "FAILED test case 9, 'B'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'C') != "Icy Night") {
        cout << "FAILED test case 9, 'C'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'D') != "Icy Pigeon") {
        cout << "FAILED test case 9, 'D'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'E') != "Icy Rock") {
        cout << "FAILED test case 9, 'E'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'F') != "Icy Bird") {
        cout << "FAILED test case 9, 'F'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'G') != "Icy Arrow") {
        cout << "FAILED test case 9, 'G'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'H') != "Icy Laser") {
        cout << "FAILED test case 9, 'H'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'I') != "Icy Storm") {
        cout << "FAILED test case 9, 'I'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'J') != "Icy Lightning") {
        cout << "FAILED test case 9, 'J'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'K') != "Icy Claw") {
        cout << "FAILED test case 9, 'K'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'L') != "Icy Steel") {
        cout << "FAILED test case 9, 'L'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'M') != "Icy Ultra") {
        cout << "FAILED test case 9, 'M'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'N') != "Icy Gem") {
        cout << "FAILED test case 9, 'N'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'O') != "Icy Agent") {
        cout << "FAILED test case 9, 'O'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'P') != "Icy 'X''") {
        cout << "FAILED test case 9, 'P'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'Q') != "Icy Commander") {
        cout << "FAILED test case 9, 'Q'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'R') != "Icy Marshall") {
        cout << "FAILED test case 9, 'R'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'S') != "Icy Sky") {
        cout << "FAILED test case 9, 'S'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'T') != "Icy Gadget") {
        cout << "FAILED test case 9, 'T'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'U') != "Icy Power") {
        cout << "FAILED test case 9, 'U'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'V') != "Icy Mac") {
        cout << "FAILED test case 9, 'V'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'W') != "Icy Degree") {
        cout << "FAILED test case 9, 'W'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'X') != "Icy Walter") {
        cout << "FAILED test case 9, 'X'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'Y') != "Icy Lance") {
        cout << "FAILED test case 9, 'Y'" << endl;
        passed = false;
    }

    if (spy_name_generator(9, 'Z') != "Icy Falcon") {
        cout << "FAILED test case 9, 'Z'" << endl;
        passed = false;
    }

    // Tests for October
    if (spy_name_generator(10, 'A') != "Rogue Fly") {
        cout << "FAILED test case 10, 'A'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'B') != "Rogue Thunder") {
        cout << "FAILED test case 10, 'B'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'C') != "Rogue Night") {
        cout << "FAILED test case 10, 'C'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'D') != "Rogue Pigeon") {
        cout << "FAILED test case 10, 'D'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'E') != "Rogue Rock") {
        cout << "FAILED test case 10, 'E'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'F') != "Rogue Bird") {
        cout << "FAILED test case 10, 'F'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'G') != "Rogue Arrow") {
        cout << "FAILED test case 10, 'G'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'H') != "Rogue Laser") {
        cout << "FAILED test case 10, 'H'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'I') != "Rogue Storm") {
        cout << "FAILED test case 10, 'I'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'J') != "Rogue Lightning") {
        cout << "FAILED test case 10, 'J'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'K') != "Rogue Claw") {
        cout << "FAILED test case 10, 'K'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'L') != "Rogue Steel") {
        cout << "FAILED test case 10, 'L'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'M') != "Rogue Ultra") {
        cout << "FAILED test case 10, 'M'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'N') != "Rogue Gem") {
        cout << "FAILED test case 10, 'N'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'O') != "Rogue Agent") {
        cout << "FAILED test case 10, 'O'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'P') != "Rogue 'X''") {
        cout << "FAILED test case 10, 'P'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'Q') != "Rogue Commander") {
        cout << "FAILED test case 10, 'Q'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'R') != "Rogue Marshall") {
        cout << "FAILED test case 10, 'R'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'S') != "Rogue Sky") {
        cout << "FAILED test case 10, 'S'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'T') != "Rogue Gadget") {
        cout << "FAILED test case 10, 'T'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'U') != "Rogue Power") {
        cout << "FAILED test case 10, 'U'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'V') != "Rogue Mac") {
        cout << "FAILED test case 10, 'V'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'W') != "Rogue Degree") {
        cout << "FAILED test case 10, 'W'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'X') != "Rogue Walter") {
        cout << "FAILED test case 10, 'X'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'Y') != "Rogue Lance") {
        cout << "FAILED test case 10, 'Y'" << endl;
        passed = false;
    }

    if (spy_name_generator(10, 'Z') != "Rogue Falcon") {
        cout << "FAILED test case 10, 'Z'" << endl;
        passed = false;
    }

    // Tests for November
    if (spy_name_generator(11, 'A') != "Mighty Fly") {
        cout << "FAILED test case 11, 'A'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'B') != "Mighty Thunder") {
        cout << "FAILED test case 11, 'B'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'C') != "Mighty Night") {
        cout << "FAILED test case 11, 'C'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'D') != "Mighty Pigeon") {
        cout << "FAILED test case 11, 'D'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'E') != "Mighty Rock") {
        cout << "FAILED test case 11, 'E'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'F') != "Mighty Bird") {
        cout << "FAILED test case 11, 'F'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'G') != "Mighty Arrow") {
        cout << "FAILED test case 11, 'G'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'H') != "Mighty Laser") {
        cout << "FAILED test case 11, 'H'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'I') != "Mighty Storm") {
        cout << "FAILED test case 11, 'I'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'J') != "Mighty Lightning") {
        cout << "FAILED test case 11, 'J'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'K') != "Mighty Claw") {
        cout << "FAILED test case 11, 'K'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'L') != "Mighty Steel") {
        cout << "FAILED test case 11, 'L'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'M') != "Mighty Ultra") {
        cout << "FAILED test case 11, 'M'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'N') != "Mighty Gem") {
        cout << "FAILED test case 11, 'N'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'O') != "Mighty Agent") {
        cout << "FAILED test case 11, 'O'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'P') != "Mighty 'X''") {
        cout << "FAILED test case 11, 'P'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'Q') != "Mighty Commander") {
        cout << "FAILED test case 11, 'Q'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'R') != "Mighty Marshall") {
        cout << "FAILED test case 11, 'R'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'S') != "Mighty Sky") {
        cout << "FAILED test case 11, 'S'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'T') != "Mighty Gadget") {
        cout << "FAILED test case 11, 'T'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'U') != "Mighty Power") {
        cout << "FAILED test case 11, 'U'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'V') != "Mighty Mac") {
        cout << "FAILED test case 11, 'V'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'W') != "Mighty Degree") {
        cout << "FAILED test case 11, 'W'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'X') != "Mighty Walter") {
        cout << "FAILED test case 11, 'X'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'Y') != "Mighty Lance") {
        cout << "FAILED test case 11, 'Y'" << endl;
        passed = false;
    }

    if (spy_name_generator(11, 'Z') != "Mighty Falcon") {
        cout << "FAILED test case 11, 'Z'" << endl;
        passed = false;
    }

    // Tests for December
    if (spy_name_generator(12, 'A') != "Ace Fly") {
        cout << "FAILED test case 12, 'A'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'B') != "Ace Thunder") {
        cout << "FAILED test case 12, 'B'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'C') != "Ace Night") {
        cout << "FAILED test case 12, 'C'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'D') != "Ace Pigeon") {
        cout << "FAILED test case 12, 'D'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'E') != "Ace Rock") {
        cout << "FAILED test case 12, 'E'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'F') != "Ace Bird") {
        cout << "FAILED test case 12, 'F'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'G') != "Ace Arrow") {
        cout << "FAILED test case 12, 'G'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'H') != "Ace Laser") {
        cout << "FAILED test case 12, 'H'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'I') != "Ace Storm") {
        cout << "FAILED test case 12, 'I'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'J') != "Ace Lightning") {
        cout << "FAILED test case 12, 'J'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'K') != "Ace Claw") {
        cout << "FAILED test case 12, 'K'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'L') != "Ace Steel") {
        cout << "FAILED test case 12, 'L'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'M') != "Ace Ultra") {
        cout << "FAILED test case 12, 'M'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'N') != "Ace Gem") {
        cout << "FAILED test case 12, 'N'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'O') != "Ace Agent") {
        cout << "FAILED test case 12, 'O'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'P') != "Ace 'X''") {
        cout << "FAILED test case 12, 'P'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'Q') != "Ace Commander") {
        cout << "FAILED test case 12, 'Q'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'R') != "Ace Marshall") {
        cout << "FAILED test case 12, 'R'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'S') != "Ace Sky") {
        cout << "FAILED test case 12, 'S'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'T') != "Ace Gadget") {
        cout << "FAILED test case 12, 'T'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'U') != "Ace Power") {
        cout << "FAILED test case 12, 'U'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'V') != "Ace Mac") {
        cout << "FAILED test case 12, 'V'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'W') != "Ace Degree") {
        cout << "FAILED test case 12, 'W'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'X') != "Ace Walter") {
        cout << "FAILED test case 12, 'X'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'Y') != "Ace Lance") {
        cout << "FAILED test case 12, 'Y'" << endl;
        passed = false;
    }

    if (spy_name_generator(12, 'Z') != "Ace Falcon") {
        cout << "FAILED test case 12, 'Z'" << endl;
        passed = false;
    }

    // Edge cases
    if (spy_name_generator(0, 'Z') != "Fast Falcon") {
        cout << "FAILED test case , 'Z'" << endl;
        passed = false;
    }

    return passed;
}