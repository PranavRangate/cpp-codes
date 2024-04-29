#include <iostream> 
#include <stack> 
using namespace std; 
  
int main() 
{ 

    stack<int> mystack; 
    mystack.push(0); 
    mystack.push(1); 
    mystack.push(2); 
  

    do { 
        cout << ' ' << mystack.top(); 
        mystack.pop(); 
    } 
    while (!mystack.empty());
}