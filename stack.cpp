//Online C++ compiler to run C++ program onlines

#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Creating a stack of integers
    stack<int> stack;
//
    // Pushing elements onto the stack
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);

    // Adding a variable 'num' to the stack
    int num = 0;
    stack.push(num);

    // Removing elements from the stack
    stack.pop();
    stack.pop();
    stack.pop();

    // Printing the elements in reverse order
    cout << "Stack Elements (in reverse order): ";
    while (!stack.empty()) {
        cout << stack.top() << " ";
        stack.pop();
    }

    return 0;
}
//