#include "Stack.h"
#include "Queue.h"

using namespace std;
int main() {
// Test cases for the Stack class
    Stack myStack;
    // Test Case 1: Push elements 11, 22, and 33 onto the stack and print the stack.
    
    myStack.push(11);
    myStack.push(22);
    myStack.push(33);

    // Expected Output: 33, 22, 11.
    cout<< myStack.toString() << endl;
    // Test Case 2: Pop the top element from the stack and print the stack.
    myStack.pop();