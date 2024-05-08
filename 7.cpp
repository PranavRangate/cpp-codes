#include<iostream>
using namespace std;

class Data{
		
    public:
	int d;

    	Data()
    	    {
    	      d=0;
			}
    	Data(int m)
    	    {
    	      d=m;
			}
			
   Data operator+(Data &n)
                {
                	Data temp;
                	temp.d=this->d+n.d;
                	return temp;
				}
				
	Data operator*(Data &n)
                {
                	Data temp;
                	temp.d=this->d*n.d;
                	return temp;
				}
				
friend ostream& operator<<(ostream &os,Data &m)
                {
                	os<<m.d;
                	
                	return os;
				}
			
};

int main()
{
	Data d1(10);
	Data d2(8);
	
	Data sum=d1+d2;
	Data mul=d1*d2;
	
	cout<<sum<<endl;
	cout<<mul;
}