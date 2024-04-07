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
        cout<<"Enter the size of Stack :";
        cin>>size;
		cout<<endl;	
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
	
	void Push(){
		
		int x;
		cout<<"Enter the value you want to Push : ";
        cin>>x;
        cout<<endl;
		
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
      

class Queue{
	public:
	int size;
	int q[max_size];
	int rare;
	int front;
	
	
	public:
    Queue(){
    	rare=0;
    	front=0;
        cout<<"Enter the size of Queue :";
        cin>>size;
        cout<<endl;
	}
	
	Queue(int size){
    	rare=0;
    	front=0;
    	this->size=size;
	}
	
	void Enqueue(int x){
		if(rare>size){
			cout<<"Overflow";
			return;
		}
		 q[rare]=x;
		 rare=rare+1;
		
	}
	
	void Enqueue(){
		int x;
		cout<<"Enter the value you want to Enqueue : ";
        cin>>x;
        cout<<endl;
        
		if(rare>size){
			cout<<"Overflow";
			return;
		}
		 q[rare]=x;
		 rare=rare+1;
		
	}
	
	void Dequeue(){
		if(rare<0){
			cout<<"Underflow";
			return;
		}
		q[front]=0;
		 front=front+1;
		
	}
	
	
	void display(){
		int i;
		cout<<"your queue : \n";
		for(i=front;i<rare;i++){
			cout<<q[i]<<endl;
		}
	}
	
};



int main(){
	
	int choise;
	
	cout<<"1.Stack"<<endl;
	cout<<"2.Queue"<<endl;
	cout<<"What's you want to perform:"<<endl;
	cin>>choise;
	
	if(choise==1){
		
	Stack s1;
	
	int ch;
	 
	do{
	
	cout<<"1.Push"<<endl;
	cout<<"2.Pop"<<endl;
	cout<<"3.Display"<<endl;
	cout<<"What's you want to perform :";
	cin>>ch;
	cout<<endl;
	
	       if(ch==1){
		             s1.Push();
	                }
	      if(ch==2){
	            	s1.Pop();
                	}

	}
	
	while(ch!=3);
	
	s1.display();
	
	}
	
	
	if(choise==2){
		
	Queue q1;
	
	int ch;
	 
	do{
	
	cout<<"1.Enqueue"<<endl;
	cout<<"2.Dequeue"<<endl;
	cout<<"3.Display"<<endl;
	cout<<"What's you want to perform :";
	cin>>ch;
	cout<<endl;
	
	       if(ch==1){
		             q1.Enqueue();
	                }
	      if(ch==2){
	            	q1.Dequeue();
                	}

	}
	
	while(ch!=3);
	
	q1.display();
		
	}
	
}
