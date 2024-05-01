#include <iostream>

using namespace std;

class Stack {
private:
    int data[100];
    int topIndex;

public:
    Stack() : topIndex(-1) {}

    void push(int val) {
        if (topIndex == 99) {
            cout << "Stack is full." << endl;
            return;
        }
        topIndex++;
        data[topIndex] = val;
    }

    void pop() {
        if (topIndex == -1) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Popped element: " << data[topIndex] << endl;
        topIndex--;
    }

    void display() {
        if (topIndex == -1) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= topIndex; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    myStack.display();

    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();

    return 0;
}
