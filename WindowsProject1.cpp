// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

int main() {
    // Write C++ code here
    std::string cars[4] = { "Volvo", "BMW", "Ford", "Mazda" };

    // Output each element of the array
    for (int i = 0; i < 4; ++i) {
        std::cout << cars[i] << std::endl;
    }

    return 0;
}

============================================================== =
/*
#include <iostream>
#include <string>

int main() {
    // Write C++ code here
    std::string cars[4] = { "Volvo", "BMW", "Ford", "Mazda" };

    // Output each element of the array
    for (int i = 0; i < 1; ++i) {
        cars[0] = "Opel";
        std::cout << cars[0];
    }

    return 0;
}
 */
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
    // Write C++ code here
    int myNumbers[5] = { 10,20,30,40,50 };
    for (int i : myNumbers) {
        std::cout << i << "\n";
    }
    return 0;
}

output:10 20 30 40 50

====================================================== =
#include <iostream>
#include <string>

int main() {
    // Write C++ code here
    std::string letters[2][4] = { {"A","B","C","D"},
        {"E","F","G","H"} };
    std::cout << letters[1][3];
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
