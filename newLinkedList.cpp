#include<iostream>
using namespace std;

class Node{
	
	public:

	int data;
	Node *next;
		
	Node(){
		data=0;
		next=NULL;
	}
	Node(int data){
		this->data=data;
		this->next=NULL;
	}	
	
};


class LinkedList{
	
	Node *head;
	
	public:
		
	LinkedList(){
		head=NULL;
	}
		
	void insertnode(int data)
	     {
	     	Node* newNode = new Node(data);
	     	
	     	if(head==NULL)
	     	  {
	     	  	head=newNode;
	     	  	return;
			   }
			   
			Node* temp=head;
			
			while(temp->next != NULL)
			     {
			     	temp=temp->next;
				 }
				 
	     	temp->next=newNode;
		 }
	
	void PrintLinkedList(){
		Node* temp=head;
		
		if(temp==NULL)
		  {
		  	cout<<"List is Empty";
		  	return;
		  }
		  
		while(temp != NULL)
			     {
			     	cout<<temp->data<<" ";
			     	
			     	temp=temp->next;
			     	
				 }
		  
		
	}
	
};

int main()
{
	LinkedList list;
	
	list.insertnode(10);
	list.insertnode(20);
	
	list.PrintLinkedList();
	
}