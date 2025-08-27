#include <iostream>
using namespace std;

class Queue {
    int* arr;
    int front;
    int rear;
    int size;

public:
    Queue() {
        size = 10000;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    bool isEmpty() {
        return (front == rear);
    }

    void enqueue(int data) {
        if (rear == size)
            cout << "queue is full" << endl;
        else {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if (front == rear) {
            return -1;
        } else {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear) {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int frontElement() {
        if (front == rear) {
            return -1;
        } else {
            return arr[front];
        }
    }
};

int main() {
    Queue q;

    
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    
    cout << "Front element: " << q.frontElement() << endl;

    
    cout << "Dequeued element: " << q.dequeue() << endl;
    cout << "Dequeued element: " << q.dequeue() << endl;

    
    if (q.isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    
    q.enqueue(5);
    q.enqueue(6);

    
    while (!q.isEmpty()) {
        cout << "Dequeued element: " << q.dequeue() << endl;
    }

    
    if (q.isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}