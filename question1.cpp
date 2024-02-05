#include <iostream>
using namespace std;

int main() {
    // Creating an array of car brands with a size of 4
    string cars[4] = {"Volvo", "BMW", "Tesla", "Ford"};

    // Looping through each element in the array
    for (int i = 0; i < 4; i++) {
        // Printing the name of each car followed by a comma and newline
        cout << cars[i] << ",\n";
    }

    // The main function returns 0 by default, indicating successful execution
    return 0;
}