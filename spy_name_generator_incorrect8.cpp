//
// Created by Kayli Pike on 10/16/24.
//
#include <string>
using namespace std;

string spy_name_generator(int birth_month, char first_initial) {
    string spy_name;

    // Determine a code name based on the birth month
    if (birth_month == 1) {
        spy_name = "Fast";
    } else if (birth_month == 2) {
        spy_name = "Neo";
    } else if (birth_month == 3) {
        spy_name = "Silent";
    } else if (birth_month == 4) {
        spy_name = "Diamond";
    } else if (birth_month == 5) {
        spy_name = "Glitter";
    } else if (birth_month == 6) {
        spy_name = "Starling";
    } else if (birth_month == 7) {
        spy_name = "Shadow";
    } else if (birth_month == 8) {
        spy_name = "Salt";
    } else if (birth_month == 9) {
        spy_name = "Icy";
    } else if (birth_month == 10) {
        spy_name = "Rogue";
    } else if (birth_month == 11) {
        spy_name = "Mighty";
    } else if (birth_month == 12) {
        spy_name = "Ace";
    }

    // Append to the spy name based on the first initial
    if (first_initial == 'A') {
        spy_name += " Fly";
    } else if (first_initial == 'B') {
        spy_name += " Thunder";
    } else if (first_initial == 'C') {
        spy_name += " Day"; // Changed Night to Day
    } else if (first_initial == 'D') {
        spy_name += " Pigeon";
    } else if (first_initial == 'E') {
        spy_name += " Rock";
    } else if (first_initial == 'F') {
        spy_name += " Bird";
    } else if (first_initial == 'G') {
        spy_name += " Arrow";
    } else if (first_initial == 'H') {
        spy_name += " Laser";
    } else if (first_initial == 'I') {
        spy_name += " Storm";
    } else if (first_initial == 'J') {
        spy_name += " Lightning";
    } else if (first_initial == 'K') {
        spy_name += " Claw";
    } else if (first_initial == 'L') {
        spy_name += " Steel";
    } else if (first_initial == 'M') {
        spy_name += " Ultra";
    } else if (first_initial == 'N') {
        spy_name += " Gem";
    } else if (first_initial == 'O') {
        spy_name += " Agent";
    } else if (first_initial == 'P') {
        spy_name += " 'X'";
    } else if (first_initial == 'Q') {
        spy_name += " Commander";
    } else if (first_initial == 'R') {
        spy_name += " Marshall";
    } else if (first_initial == 'S') {
        spy_name += " Sky";
    } else if (first_initial == 'T') {
        spy_name += " Gadget";
    } else if (first_initial == 'U') {
        spy_name += " Power";
    } else if (first_initial == 'V') {
        spy_name += " Mac";
    } else if (first_initial == 'W') {
        spy_name += " Degree";
    } else if (first_initial == 'X') {
        spy_name += " Walter";
    } else if (first_initial == 'Y') {
        spy_name += " Lance";
    } else if (first_initial == 'Z') {
        spy_name += " Falcon";
    }

    return spy_name;
}

