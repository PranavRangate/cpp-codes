#include<iostream>
using namespace std;
const int max_size=100;
class Stack{
	public:
	int size;
	int s[max_size];
	int top;
	
	
	public:
    Stack(){
    	top=0;
    	size=max_size;
	}
	
	Stack(int size){
    	top=0;
    	this->size=size;
	}
	
	void Push(int x){
		if(top>size){
			cout<<"Overflow";
			return;
		}
		 s[top]=x;
		 top=top+1;
		
	}
	
	void Pop(){
		if(top<0){
			cout<<"Underflow";
			return;
		}
		s[top]=0;
		 top=top-1;
		
	}
	
	void display(){
		int i;
		cout<<"your stack : \n";
		for(i=0;i<top;i++){
			cout<<s[i]<<endl;
		}
	}
	
};
      



int main(){
	Stack s1(3);
	s1.Push(1);
	s1.Push(2);
	s1.Push(3);
	s1.Pop();	
	s1.display();
	
}
