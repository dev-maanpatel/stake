#include<iostream>

using namespace std;

class Queue {
    private:
        int *arr;
        int front;
        int rear;
        int size;
        int count;
    public:

        Queue(int size) {
            this->arr = new int[size];
            this->front = -1;
            this->rear = -1;
            this->size = size;
            this->count = 0;
        }

        ~Queue() {
            delete[] this->arr;
            this->arr = nullptr;
        }

        void enqueue(int);
        void dequeue();
        int getFront();
        int getRear();
        void display();
        bool isEmpty();
        bool isFull();
        int length();
};

void Queue::enqueue(int data) {
    if (this->rear == this->size - 1) {
        cout << "\n--------------------------------\n";
        cout << "Queue is Full...." << endl;
        cout << "--------------------------------\n\n";
        return;
    }

    if (this->front == -1 && this->rear == -1) {
        this->front++;
        this->rear++;
        this->arr[this->rear] = data;
    } else {
        this->rear++;
        this->arr[this->rear] = data;
    }
    this->count++;
}

void Queue::dequeue() {
    if (this->front == -1) {
        cout << "\n--------------------------------\n";
        cout << "Queue is Empty...." << endl;
        cout << "--------------------------------\n\n";
        return;
    }

    if (this->front == this->rear) {
        this->arr[this->front] = 0;
        this->front = -1;
        this->rear = -1;
    } else {
        this->arr[this->front] = 0;
        this->front++;
    }
    this->count--;
}

int Queue::getFront() {
    return this->arr[this->front];
}

int Queue::getRear() {
    return this->arr[this->rear];
}

bool Queue::isEmpty() {
    return this->front == -1 && this->rear == -1;
}

bool Queue::isFull() {
    return this->rear == this->size - 1;
}

void Queue::display() {
    cout << "\n--------------------------------\n";
    for (int i = this->front; i <= this->rear; i++) {
        cout << this->arr[i] << " ";
    }
    cout << "\n--------------------------------\n\n";
}

int main() {
    Queue q(5);
    int choice;

    do {
        cout << "Enter 1 to Enqueue data in queue : " << endl;
        cout << "Enter 2 to Dequeue data from queue : " << endl;
        cout << "Enter 3 to get the Front data from queue : " << endl;
        cout << "Enter 4 to get the Rear data from queue : " << endl;
        cout << "Enter 5 to display queue : " << endl;
        cout << "Enter 6 to check if queue is empty or not : " << endl;
        cout << "Enter 7 to check if queue is full or not : " << endl;
        cout << "Enter 8 to check current size of queue : " << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int data;

                cout << "Enter the element you want to add in queue : ";
                cin >> data;

                q.enqueue(data);
                break;
            }
            case 2: {
                q.dequeue();
                break;
            }
            case 3: {
                break;
            }
            case 4: {
                break;
            }
            case 5: {
                q.display();
                break;
            }
            case 6: {
                break;
            }
            case 7: {
                break;
            }
            case 8: {
                break;
            }
        }
    } while (choice != 0);

    return 0;
}