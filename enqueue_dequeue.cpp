
#include <iostream>
using namespace std;

#define SIZE 5

int queueArray[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if ((rear + 1) % SIZE == front) {
        cout << "Queue Overflow\n";
        return;
    }

    if (front == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    queueArray[rear] = value;
    cout << value << " inserted\n";
}

void dequeue() {
    if (front == -1) {
        cout << "Queue Underflow\n";
        return;
    }

    cout << queueArray[front] << " removed\n";

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is empty\n";
        return;
    }

    int i = front;

    cout << "Queue: ";
    while (true) {
        cout << queueArray[i] << " ";

        if (i == rear)
            break;

        i = (i + 1) % SIZE;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    dequeue();
    dequeue();

    enqueue(50);
    enqueue(60);

    display();

    return 0;
}
    