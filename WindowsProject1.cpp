// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

int main() {
    // Declare an array of strings named 'cars' with a size of 4 and initialize it with car brands
    std::string cars[4] = { "Volvo", "BMW", "Ford", "Mazda" };

    // Use a for loop to iterate through each element of the array
    for (int i = 0; i < 4; ++i) {
        // Output the current element of the array followed by a newline
        std::cout << cars[i] << std::endl;
    }

    // Return 0 to indicate successful completion of the program
    return 0;
}

============================================================== =

#include <iostream>
#include <string>

int main() {
    // Declare an array of strings named 'cars' with a size of 4
    std::string cars[4] = { "Volvo", "BMW", "Ford", "Mazda" };

    // Output each element of the array
    for (int i = 0; i < 1; ++i) {
        // Change the value of the first element in the array to "Opel"
        cars[0] = "Opel";

        // Output the modified value of the first element in the array
        std::cout << cars[0];
    }

    // Return 0 to indicate successful completion of the program
    return 0;
}

 
==========================================================


endl
\n
\t
these are called print modifiers

==============================================================
for loop-- > only used for document
foreach loop-- > is used to print the direcotory of the loop
============================================ =

// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

int main() {
    // Declare an array of integers named 'myNumbers' with a size of 5 and initialize it with values
    int myNumbers[5] = { 10, 20, 30, 40, 50 };

    // Use a range-based for loop to iterate through each element of the array
    for (int i : myNumbers) {
        // Output the current element followed by a newline character
        std::cout << i << "\n";
    }

    // Return 0 to indicate successful completion of the program
    return 0;
}


output:10 20 30 40 50

====================================================== =
#include <iostream>
#include <string>

int main() {
    // Declare a 2D array of strings named 'letters' with 2 rows and 4 columns and initialize it with values
    std::string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };

    // Output the value at the specified position in the array (row 1, column 3)
    std::cout << letters[1][3];

    // Return 0 to indicate successful completion of the program
    return 0;
}

========================================

Battelship.cpp game code

// We put "1" to indicate there is a ship.
#include<iostream>
using namespace std;
int main() {
    bool ships[4][4] = {
      { 0, 1, 1, 0 },
      { 0, 0, 0, 0 },
      { 0, 0, 1, 0 },
      { 0, 0, 1, 0 }
    };

    // Keep track of how many hits the player has and how many turns they have played in these variables
    int hits = 0;
    int numberOfTurns = 0;

    // Allow the player to keep going until they have hit all four ships
    while (hits < 4) {
        int row, column;

        cout << "Selecting coordinates\n";

        // Ask the player for a row
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        // Ask the player for a column
        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        // Check if a ship exists in those coordinates
        if (ships[row][column]) {
            // If the player hit a ship, remove it by setting the value to zero.
            ships[row][column] = 0;

            // Increase the hit counter
            hits++;

            // Tell the player that they have hit a ship and how many ships are left
            cout << "Hit! " << (4 - hits) << " left.\n\n";
        }
        else {
            // Tell the player that they missed
            cout << "Miss\n\n";
        }

        // Count how many turns the player has taken
        numberOfTurns++;
    }

    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns";
}

============================================================
