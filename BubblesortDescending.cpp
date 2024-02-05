//Online C++ compiler  to run C++ program online

#include <iostream>
using namespace std;

int main() {
    // Initializing an array//
    int a[] = {8, 7, 6, 5, 2, 4, 1, 3, 9};
    
    // Calculating the length of the array
    int getArrayLength = sizeof(a) / sizeof(int);

    // Bubble Sort Algorithm to sort the array in descending order
    for (int i = 0; i < getArrayLength; i++) // Iterating through each element
    {
        for (int j = 0; j < getArrayLength - 1; j++) // Comparing adjacent elements
        {
            if (a[j] < a[j + 1]) {
                // Swapping if the current element is less than the next
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Printing the sorted array in descending order
    cout << "Sorted Array (Descending): ";
    for (int i = 0; i < getArrayLength; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}
//