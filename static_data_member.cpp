#include<iostream>
using namespace std;

class item
{
        static int count; 
        int number;
        
        public:
               void getdata(int a)
                   {
                     number=a;
                     count++;
                   }
                void get_count(void)
                  {
                     cout<<"count:";
                     cout<<count<<endl;
                  }
};

int item :: count ; 

int main( )
{
item a,b,c;
a.get_count( );
b.get_count( );
c.get_count( );
a.getdata(3);
b.getdata(3);
c.getdata(3);
cout<<"after reading data : "<<endl;
a.get_count( );
b.get_count( );
c.get_count( );
return(0);
}