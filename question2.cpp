#include <iostream>
using namespace std;

int main() {
    // Creating an array of car brands with a size of 4
    string cars[4] = {"Volvo", "BMW", "Tesla", "Ford"};

    // Modifying the first element in the array to "Opel"
    cars[0] = "Opel";

    // Printing the modified value of the first element
    cout << cars[0];

    // The main function returns 0 by default, indicating successful execution
    return 0;
}