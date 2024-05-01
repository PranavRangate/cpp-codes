#include <iostream>
#include <queue>
using namespace std;

int main(){
	
    queue<int> myQueue;
    
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    do{
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    while (!myQueue.empty()); 

    return 0;
}
