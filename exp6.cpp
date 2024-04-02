#include<iostream>
#include<cmath>
using namespace std;

class Circle{
	private:
		int centerX;
		int centerY;
		int radius;
		
	public:
		Circle(){
	        centerX=0;
		    centerY=0;
		    radius=0;		
		}
		
		Circle( int cx, int cy){
			centerX=cx;
			centerY=cy;
		}
		
		Circle(int cx, int cy, int r){
			centerX=cx;
			centerY=cy;
			radius=r;
		}
		
		void setCenter(int cx, int cy) {
        centerX = cx;
        centerY = cy;
    }

    void setRadius(int r) {
        radius = r;
    }

    double calcArea() const {
        return M_PI * radius * radius;
    }

    double calcCircumference() const {
        return 2 * M_PI * radius;
    }
		
		
	
};



class Line {
private:
    int x1, y1, x2, y2;
    double slope, intercept;

public:
    Line()
	 {  x1=0;
	    y1=0
	    x2=0
	    y2=0;
	    slope=0;
	    intercept=0;
	}
	
    Line(int x1, int y1, int x2, int y2) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
        calculateSlopeAndIntercept();
    }

    void setPoints(int x1, int y1, int x2, int y2) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
        calculateSlopeAndIntercept();
    }

    void calculateSlopeAndIntercept() {
        slope = static_cast<double>(y2 - y1) / (x2 - x1);
        intercept = y1 - slope * x1;
    }

    double getSlope()
	 { 
	 return slope; 
	 }
    double getIntercept() 
	 { 
	 return intercept;
	 }
	 
};


int main(){
	
	Circle c1(0, 0, 5);
    cout << "Area: " << c1.calcArea() << std::endl;
    cout << "Circumference: " << c1.calcCircumference() << std::endl;
	
	
}