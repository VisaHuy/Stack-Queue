#include "Node.h"

class Queue {
private:
    Node* front;     // Pointer to the front of the queue
    Node* rear;      // Pointer to the rear of the queue
    int length;      // Keeps track of the queue size
public:
    Queue() {       // Constructor
        // your code here
        this->front=NULL;
        this->rear=NULL;
        this->length=0;
    }
    ~Queue() {      // Destructor to free memory
        while (!isEmpty()) {
            dequeue();   // Deallocate all nodes
        }
    }

    // Enqueue an element into the queue
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        length++;
    }
    // Dequeue the front element from the queue
    void dequeue() {
        // your code here
        // if(isEmpty()){
        //    std:: cout << "The queue is Empty" << endl;
        //     return;
        // }

        Node* dequeue = front;
        front = front->next;
        delete[] dequeue;
        length--;

    }
    // Peek the front element without removing it
    int peek() {
        // your code here
        if(front != NULL){
            return front->data;
        }
    }
    // Check if the queue is empty
    bool isEmpty() {
        // your code here
        if(rear != NULL){
            return false;
        } else {
            return true;
        }
    }
    // Get the current length of the queue
    int size() {
        return length;
    }

    // Convert the queue to a string representation
    std::string toString() {
      // your code here
    std::string Queue = "My Queue  ";
       Node* temp;
       temp = front;
       while(temp != NULL){
            Queue += std::to_string(temp->data);
            temp = temp->next;
       }
       return Queue;
    }

};
