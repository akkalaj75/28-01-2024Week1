Commence at the top of the linked list.
Go through each node in the linked list one at a time.
Compare the current node's value to the goal value at each node.
Return true, indicating that the element has been located, if the values match.
Return false if the linked list's end is reached without the element being found.
Iterative Method: Benefits:
often requires less memory and is more efficient than recursion because it doesn't require extra function calls.
Some programmers might find it more intuitive, particularly those who are accustomed to loop-based methods.
Cons:
    can be more difficult to use and comprehend, particularly for more complicated procedures.
    could result in code duplication if the same reasoning needs to be used repeatedly.
    Recursive Method: Benefits:
Frequently more succinct and simpler to comprehend for certain issues, particularly those that are recursively solved by nature.
For algorithms where recursion streamlines the problem-solving process, it can be elegant and expressive.
Cons:
    Recursive function calls may result in increased memory cost and, in the case of very large input sizes, stack overflow issues.
    Because of the expense of function calls, it may be less runtime performant than iterative techniques, particularly for large input sizes.


*/

#include <iostream>

using namespace std;

// Define a Node structure
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Define a LinkedList class
class LinkedList {
private:
    Node* head;

    // Private member function for recursive search
    bool searchRecursive(Node* node, int key) {
        if (!node)
            return false;
        if (node->data == key)
            return true;
        return searchRecursive(node->next, key);
    }

public:
    LinkedList() : head(nullptr) {}

    // Insert a new node at the end of the list
    void insert(int val) {
        if (!head) {
            head = new Node(val);
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = new Node(val);
    }

    // Iterative search for an element
    bool searchIterative(int key) {
        Node* current = head;
        while (current) {
            if (current->data == key)
                return true;
            current = current->next;
        }
        return false;
    }

    // Wrapper function to start the recursive search from the head
    bool search(int key) {
        return searchRecursive(head, key);
    }
};

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    LinkedList llist;
    llist.insert(1);
    llist.insert(2);
    llist.insert(3);
    llist.insert(4);
    llist.insert(5);

    // Search for an element (e.g., 3) using iterative approach
    cout << "Iterative Search:" << endl;
    cout << boolalpha << llist.searchIterative(3) << endl;  // Output: true

    // Search for an element (e.g., 6) using recursive approach
    cout << "Recursive Search:" << endl;
    cout << boolalpha << llist.search(6) << endl;  // Output: false

    return 0;
}