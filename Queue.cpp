#include <iostream>

using namespace std;

class Queue {
private:
    int data[100];
    int frontIndex;
    int rearIndex;

public:
    Queue(){
	        frontIndex=0;
	        rearIndex=0;
		   }

    void enqueue(int val) {
        if (rearIndex == 100) {
            cout << "Queue is full." << endl;
            return;
        }
        data[rearIndex++] = val;
    }

    void dequeue() {
        if (frontIndex == rearIndex) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Dequeued element: " << data[frontIndex++] << endl;
    }

    void display() {
        if (frontIndex == rearIndex) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = frontIndex; i < rearIndex; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue myQueue;
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    myQueue.display();

    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();

    return 0;
}
