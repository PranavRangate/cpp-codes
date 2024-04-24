#include<iostream>
using namespace std;

class baseClass{
	public:
	
	int base_var=10;
	
	virtual display(){
		cout<<base_var;
	} 
	
};

class derivedClass: public baseClass{
	public:
	
	int deri_var=20;
	
	virtual display(){
		cout<<deri_var;
	} 
	
};

int main(){
	baseClass bc;
	derivedClass dc;
	
	baseClass *ptr;
	ptr=&dc;
	ptr->display();
}
