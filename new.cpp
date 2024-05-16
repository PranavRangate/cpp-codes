#include<iostream>
using namespace std;

class node{
    public:
	int data;
	node* next;
	node(){
		data=0;
		next=NULL;
	}	
	node(int data){
		this->data=data;
		this->next=NULL;
	}
};

class linkedlist{
	public:
	node* head;
	linkedlist(){
		head=NULL;
	}	
	void insertnode(int data){
		node *newnode=new node(data);
		if(head==NULL){
		   head=newnode;
		   return;
		}
		node* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
	
	void printlist(){
		node*temp=head;
		if(temp==NULL){
			cout<<"list is empty";
			return;
		}
	    while(temp!=NULL){
	    	cout<<temp->data<<" ";
	    	temp=temp->next;
		}
		
	}
	void deletenode(int pos){
		node *temp1=head, *temp2=NULL;
		int listlen=0;
		
		if(head==NULL){
			cout<<"list is empty";
			return;
		}
		while(temp1!=NULL){
	    	temp1=temp1->next;
	    	listlen++;
		}
		if(listlen<pos){
			cout<<"position outt of range";
			return;
		}
		temp1=head;
		if(pos==1){
			head=head->next;
			delete temp1;
			return;
		}
		while(pos-->1){
			temp2=temp1;
			temp1=temp1->next;
		}
		temp2->next=temp1->next;
		delete temp1;
		
	}
};

int main()
{
	linkedlist list;
	list.insertnode(10);
	list.insertnode(20);
	list.insertnode(30);
	list.printlist();
	list.deletenode(1);
	list.deletenode(1);
    cout<<endl<<"After deleting node:"<<endl;
	list.printlist();

}