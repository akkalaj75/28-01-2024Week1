// CPP code to illustrate Queue in 
// Standard Template Library (STL)//

#include <iostream>
#include <queue>

using namespace std;

// Function to print the queue
void showQueue(queue<int> gq) {
    // Creating a copy of the original queue
    queue<int> g = gq;
    
    // Printing the elements of the queue
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

// Driver Code
int main() {
    // Creating a queue named 'gquiz'
    queue<int> gquiz;

    // Adding elements to the queue
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    // Displaying the original queue
    cout << "The queue gquiz is : ";
    showQueue(gquiz);

    // Displaying size, front, and back of the queue
    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();

    // Removing an element from the front of the queue
    cout << "\ngquiz.pop() : ";
    gquiz.pop();

    // Displaying the modified queue
    showQueue(gquiz);

    return 0;
}

//