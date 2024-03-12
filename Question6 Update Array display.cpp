#include <iostream>
using namespace std;

int main() {
    // Creating an array of strings named "cars" with a size of 5 and initializing it
    string cars[5] = {"Volvo", "Toyota", "Ford", "Tesla", "Honda"};

    // Calculating the number of elements in the array
    int n = sizeof(cars) / sizeof(string);

    // Using a for loop to iterate through each element in the array
    for (int i = 0; i < n; i++) {
        // Printing the name of each car followed by a newline
        cout << cars[i] << "\n";
    }

    // The main function returns 0 by default, indicating successful execution
    return 0;
}
