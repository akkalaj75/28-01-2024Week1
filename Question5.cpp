#include <iostream>
using namespace std;

int main() {
    // Creating an array of integers named "mynumbers" with a size of 5 and initializing it
    int mynumbers[5] = {10, 20, 30, 40, 50};

    // Printing the size (in bytes) of the entire array using sizeof
    cout << "Size of mynumbers array: " << sizeof(mynumbers) << endl;

    // Printing the size (in bytes) of an individual integer using sizeof
    cout << "Size of int data type: " << sizeof(int) << endl;

    // The main function returns 0 by default, indicating successful execution
    return 0;
}
