/*
1. Easy: Understanding Bubble Sort
Manually sort the array `[5, 2, 8, 1, 3] ` using the bubble sort technique.write down each step of the process.
2. Intermediate: Trace the Bubble Sort
Provided the unsorted array `[7, 4, 2, 9, 1] ` and trace the bubble sort algorithm step by step, showing the changes in the array after each pass.
3. Intermediate: Code Implementation
Implement the bubble sort algorithm in C++.Provide them with the following unsorted array : `[3, 6, 1, 8, 2] `. Code from scratch and test it to ensure it works correctly.

4. Advanced: Optimization Challenge
Challenge yourself to optimize the bubble sort algorithm.Provided with the partially sorted array `[1, 2, 3, 4, 5, 10, 9, 8, 7, 6] `. Optimize the algorithm to reduce the number of comparisons or swaps, making the sorting process more efficient.

5. Advanced: Comparison with Other Sorting Algorithms
Compare the bubble sort algorithm with quicksort and mergesort.Discuss the advantages and disadvantages of bubble sort in different scenarios.Additionally, analyze when it might be preferable to use other sorting algorithms.
*/


1. Easy: Understanding Bubble Sort
Manually sort the array `[5, 2, 8, 1, 3] ` using the bubble sort technique.write down each step of the process.

Original array: [9, 4, 7, 1, 6]
Step 1 :
    Compare 9 and 4. Swap them.
    Array after step 1 : [4, 9, 7, 1, 6]
    Compare 9 and 7. Swap them.
    Array after step 1 : [4, 7, 9, 1, 6]
    Compare 9 and 1. Swap them.
    Array after step 1 : [4, 7, 1, 9, 6]
    Compare 9 and 6. Swap them.
    Array after step 1 : [4, 7, 1, 6, 9]
    Now, the largest element(9) is in its correct position at the end of the array.

    Step 2 :
    Compare 4 and 7. No swap needed.
    Array after step 2 : [4, 7, 1, 6, 9]
    Compare 7 and 1. Swap them.
    Array after step 2 : [4, 1, 7, 6, 9]
    Compare 7 and 6. Swap them.
    Array after step 2 : [4, 1, 6, 7, 9]
    Now, the second largest element(7) is in its correct position.

    Step 3 :
    Compare 4 and 1. Swap them.
    Array after step 3 : [1, 4, 6, 7, 9]
    Compare 4 and 6. No swap needed.
    Array after step 3 : [1, 4, 6, 7, 9]
    1Now, the array is sorted.
    Final sorted array : [1, 4, 6, 7, 9]*\


   2. Intermediate : Trace the Bubble Sort
    Provided the unsorted array `[7, 4, 2, 9, 1] ` and trace the bubble sort algorithm step by step, showing the changes in the array after each pass
    Original array: [12, 5, 8, 3, 9]
    Pass 1 :
    Compare 12 and 5. Swap them.
    Array after pass 1 : [5, 12, 8, 3, 9]
    Compare 12 and 8. Swap them.
    Array after pass 1 : [5, 8, 12, 3, 9]
    Compare 12 and 3. Swap them.
    Array after pass 1 : [5, 8, 3, 12, 9]
    Compare 12 and 9. Swap them.
    Array after pass 1 : [5, 8, 3, 9, 12]
    Pass 2 :
    Compare 5 and 8. No swap needed.
    Array after pass 2 : [5, 8, 3, 9, 12]
    Compare 8 and 3. Swap them.
    Array after pass 2 : [5, 3, 8, 9, 12]
    Compare 8 and 9. No swap needed.
    Array after pass 2 : [5, 3, 8, 9, 12]
    Pass 3 :
    Compare 5 and 3. Swap them.
    Array after pass 3 : [3, 5, 8, 9, 12]
    Compare 5 and 8. No swap needed.
    Array after pass 3 : [3, 5, 8, 9, 12]
    Pass 4 :
    Compare 3 and 5. No swap needed.
    Array after pass 4 : [3, 5, 8, 9, 12]
    Now, the array is sorted.The final sorted array is[3, 5, 8, 9, 12]*/
  //  3. Intermediate : Code Implementation
   // Implement the bubble sort algorithm in C++.Provide them with the following unsorted array : `[3, 6, 1, 8, 2] `. Code from scratch and test it to ensure it works correctly.
    #include <iostream>
#include <vector>
    void bubbleSort(std::vector<int>&arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    std::vector<int> unsortedArray = { 7, 2, 9, 4, 1 };
    std::cout << "Unsorted array: ";
    for (int num : unsortedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Apply Bubble Sort
    bubbleSort(unsortedArray);

    std::cout << "Sorted array: ";
    for (int num : unsortedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

//4. Advanced: Optimization Challenge
//Challenge yourself to optimize the bubble sort algorithm.Provided with the partially sorted array `[1, 2, 3, 4, 5, 10, 9, 8, 7, 6] `. Optimize the algorithm to reduce the number of comparisons or swaps, making the sorting process more efficient.
#include <iostream>
#include <vector>
void optimizedBubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;

        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no swaps were made in this pass, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    std::vector<int> partiallySortedArray = { 5, 2, 3, 6, 1, 10, 8, 7, 4, 9 };

    std::cout << "Partially sorted array: ";
    for (int num : partiallySortedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Apply Optimized Bubble Sort
    optimizedBubbleSort(partiallySortedArray);

    std::cout << "Sorted array: ";
    for (int num : partiallySortedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}


/*
5.comparison :

Bubble Sort :

Advantages:
Simple to understandand implement.
No extra memory is needed(in - place).
Disadvantages :
    Inefficient for large datasets.
    Not stable.
    Quicksort :

    Advantages :
    Efficient average - case performance(O(n log n)).
    In - place sorting.
    Good for large datasets.
    Disadvantages:
        Inefficient in the worst case.
            Not stable.
        Mergesort:

        Advantages:
            Consistently good performance(O(n log n)).
                Stable sorting.
                Suitable for large datasets.
                Disadvantages :
                Requires extra memory.
                When to Use :

            Use Bubble Sort for simplicityand small datasets.
                Use Quicksort for average - case efficiency, especially in - memory constrained scenarios.
                Use Mergesort for consistent performance, stability, and when additional memory usage is acceptable.
                In general, for most real - world scenarios with medium to large datasets, Quicksort or Mergesort are often preferred over Bubble Sort due to their better average - case performance.The choice between Quicksortand Mergesort depends on specific requirements like stabilityand memory usage.
                */

