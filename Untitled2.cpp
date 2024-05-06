#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Default constructor
    Complex() : real(0), imag(0) {}

    // Parameterized constructor
    Complex(double r, double i) : real(r), imag(i) {}

    // Copy constructor
    Complex(const Complex &c) : real(c.real), imag(c.imag) {}

    // Overloading + operator for addition
    Complex operator+(const Complex &c) const {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Overloading - operator for subtraction
    Complex operator-(const Complex &c) const {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    // Overloading << operator for printing complex numbers
    friend ostream &operator<<(ostream &out, const Complex &c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

int main() {
    // Create complex numbers
    Complex c1(3, 4);  // 3 + 4i
    Complex c2(1, 2);  // 1 + 2i

    // Perform addition and subtraction
    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    // Print the results
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;

    return 0;
}
#include<iostream>
using namespace std;

class complex{
	double real;
	double imag;
	
	public:
		
	complex(){
		real=0;
		imag=0;
	}
	complex(double a,double b){
		real=a;
		imag=b;
	}
	//copy constructor
	complex(const complex &t){   
		real=t.real;
    	imag=t.imag;
	}
	
	complex operator+(complex &cmp)
	        {
	        	complex temp;
	        	temp.real=this->real+cmp.real;
	        	temp.imag=this->imag+cmp.imag;
	        	return temp;
			}
			
	complex operator-(complex &c)
	        {
	        	complex temp;
	        	temp.real=this->real-c.real;
	        	temp.imag=this->imag-c.imag;
	        	return temp;
			}
	friend ostream& operator<<(ostream &os,complex &cm)
	        {
	        	os<<cm.real<<" + "<<cm.imag;
	        	return os;
			}
};


int main()
{
	
	complex c1(4,5);
	complex c2(2,3);
	
	complex sum= c1 + c2;
	complex diff=c1 - c2;
	
	cout<<"sum = "<<sum<<"i"<<endl;
	cout<<"difference ="<<diff<<"i";
	
}