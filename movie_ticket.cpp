#include<iostream>
#include<iomanip>
using namespace std;

class Movie{
	  char name[100];
	  float atp;
	  float ctp;
	  int ats;
	  int cts;
	  float per;
	  int n;
	  float ga;
	  float ad;
	  float ns;
	       public: void get_Data(){
	       	       cout<<"Enter the name of the movie=";
	       	       cin>>this->name;
	       	       cout<<"Enter the adult ticket prise=";
	       	       cin>>this->atp;
	       	       cout<<"Enter the child ticket prise=";
	       	       cin>>this->ctp;
	       	       cout<<"Enter the adult ticket sold=";
	       	       cin>>this->ats;
	       	       cout<<"Enter the child ticket sold=";
	       	       cin>>this->cts;
	       	       cout<<"Enter the percentage=";
	       	       cin>>this->per;
		          };
		   
		   public: void cal(){
		   	        n=ats+cts;
		   	        ga=((atp*ats)+(ctp*cts));
		   	        ad=(ga*(per/100));
		   	        ns=ga-ad;
		          };
		   
		   public: void print_Data(){
		   	       cout<<endl<<endl<<"Movie name:"<<setw(24)<<setfill('.')<<"."<<this->name<<endl;
		   	       cout<<"Number of tickets sold:"<<setw(12)<<setfill('.')<<"."<<this->n<<endl;
		   	       cout<<"Gross amount:"<<setw(23)<<setfill('.')<<".$"<<this->ga<<endl;
		   	       cout<<"Percentage of gross amount donated:"<<this->per<<endl;
		   	       cout<<"Amount donated:"<<setw(21)<<setfill('.')<<".$"<<this->ad<<endl;
		   	       cout<<"Nate sale:"<<setw(26)<<setfill('.')<<".$"<<this->ns<<endl;
		          };
	  
     };
     
int main(){
	Movie m1;
	m1.get_Data();
	m1.cal();
	m1.print_Data();
}