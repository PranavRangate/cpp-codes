#include<iostream>
#include<string.h>
#include<list>
using namespace std;

class Youtube{
	public:
	string name;
	int subs;
	
   public:
   	Youtube(){
		this->name="none";
		this->subs=0;
	}
   	
	Youtube(string name,int subs){
		this->name=name;
		this->subs=subs;
	}
	void setData(){
		cout<<"Enter your Youtube name :";
		cin>>this->name;
		cout<<"Enter your Youtube subscribers :";
		cin>>this->subs;
	}
	void getData(){
		cout<<"your Youtube name is:"<<this->name<<endl;
		cout<<"your Youtube subscribers are:"<<this->subs<<endl;
	}
};

class MyCollection{
	public:
		list<Youtube>MyList;
		void operator +=(Youtube &channel)
		    {
		    	MyList.push_back(channel);
			}
    
		
    
};

ostream& operator<<(ostream& cout,Youtube& YT){
	cout<<YT.name;
	cout<<YT.subs;
}

ostream& operator<<(ostream& COUT,MyCollection& myc){
	for(Youtube YT : myc.MyList){
		COUT<<YT;
	}
}





int main(){

	
	Youtube YT1("Dkte",350);
	Youtube YT2("Sit",150);
	MyCollection MC;
	
	MC+=YT1;
	MC+=YT2;
	
	cout<<MC;
	
	
	
}
