#include<iostream>

using namespace std;

class Node{

	public:

	int data;

	Node *next;

};

int main(){

	

	Node *head=new Node();

	Node *second=new Node();

	Node *third=new Node();

	

	head->data=2;

	head->next=second;

	

	second->data=4;

	second->next=third;

	

	third->data=6;

	third->next=NULL;

	

	Node *current=head;

	while(current!=NULL)

	{

		cout<<current->data<<"  ";

		current=current->next;

	}

	

}