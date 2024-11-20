#include "Node.h"
#include <string.h>

class Stack {
private:
    Node* top;     // Pointer to the top of the stack
    int length;      // Keeps track of the stack size

public:
    Stack() {       // Constructor
        // your code here
        this->top = NULL;
        this->length = 0;
    }

    ~Stack() {      // Destructor to free memory
        while (!isEmpty()) {
            pop();   // Deallocate all nodes
        }
    }

    // Push an element onto the stack
    void push(int value) {
       // your code 
        Node* temp;
        temp = new Node(value);
        if(top == NULL){
           top = temp;
           length++;
        } else {
            temp->next = top;
            top = temp;
            length++;
        }
    }

    // Pop the top element from the stack
    void pop() {
        // your code here
        if(top != NULL){
            Node *temp;
            top->data = NULL;
            temp = top->next;
            top = temp;   
            length--;
        }

    }

    // Peek the top element without removing it
    int peek() {
        // your code here
        if(top != NULL){
            return top->data;
        } else{
            return -1;
        }
    }

    // Check if the stack is empty
    bool isEmpty() {
       // your code here
       if(length == 0){
        return true;
       } else {
        return false;
       }
    }

    // Get the current length of the stack
    int size() {
        return length;
    }
    // Convert the stack to a string representation
    std::string toString() {
       // your code here
       std::string stack = "My Stack  ";
       Node* temp;
       temp = top;
       while(temp != NULL){
            stack += std::to_string(temp->data);
            temp = temp->next;
       }
       return stack;

    }
};
