#include<iostream>
using namespace std;

class Rectangle{
	
	int l;
	int b;
	int circumferance;
	int area;
	friend void getRect();
	
	public:
	Rectangle(int le,int be){
		l=le;
		b=be;
	}
	
	
	void getRect(){
		area=l*b;
		circumferance=2*l*b;
		cout<<"Area of rectangle is "<<area<<endl;
		cout<<"Circumferance of rectangle is "<<circumferance<<endl;

	}
};

int main(){
	Rectangle r1(5,6);
	r1.getRect();
}
