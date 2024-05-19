#include<iostream>
using namespace std;

class Matrix{
	
		
	int rows;
	int cols;
	int data[100][100];
	
	public:
	
	Matrix(){
		rows=0;
		cols=0;
		
	}
	
	Matrix(int r,int c){
		rows=r;
		cols=c;
	}
	
friend istream&	operator>>(istream &in,Matrix &mat)
	{
        int i,j;
        for(i=0;i<mat.rows;i++)
           {
           for(j=0;j<mat.cols;j++)
		       {
		       	in>>mat.data[i][j];
			   }
		   }
		   
		 return in;		
	}
	
	
friend ostream&	operator<<(ostream &out,Matrix &max)
	{
        int i,j;
        for(i=0;i<max.rows;i++)
           {
           for(j=0;j<max.cols;j++)
		       {
		       	out<<max.data[i][j]<<" ";
			   }
			out<<endl;
		   }
		   
		 return out;		
	}
	
friend Matrix operator+(Matrix &n1,Matrix &n2)
       {
       	    int i,j;
       	    Matrix temp(n1.rows,n1.cols);
       	    
       	    for(i=0;i<n1.rows;i++)
               {
                for(j=0;j<n1.cols;j++)
		           {
       	             temp.data[i][j]=n1.data[i][j]+n2.data[i][j];
       	           }
       	       }
			return temp; 
	   }
	   
	   
friend Matrix operator-(Matrix &n1,Matrix &n2)
       {
       	    int i,j;
       	    Matrix temp(n1.rows,n1.cols);
       	    
       	    for(i=0;i<n1.rows;i++)
               {
                for(j=0;j<n1.cols;j++)
		           {
       	             temp.data[i][j]=n1.data[i][j]-n2.data[i][j];
       	           }
       	       }
			return temp; 
	   }
	
friend Matrix operator*(Matrix &n1,Matrix &n2)
       {
       	    int i,j;
       	    Matrix temp(n1.rows,n1.cols);
       	    
       	    for(i=0;i<n1.rows;i++)
               {
                for(j=0;j<n1.cols;j++)
		           {
       	             temp.data[i][j]=n1.data[i][j]*n2.data[i][j];
       	           }
       	       }
			return temp; 
	   }
	
};

int main(){
	Matrix m1(2,2);
	Matrix m2(2,2);
	
	cout<<"Enter 1st matrix elements"<<endl;
	cin>>m1;                                    
	cout<<"Enter 2nd matrix elements"<<endl;
	cin>>m2;                                   
	
	Matrix add=m1+m2;
	Matrix sub=m1-m2;
	Matrix mul=m1*m2;
	
	cout<<"First matrix "<<endl<<m1<<endl;
	cout<<"Second matrix "<<endl<<m2<<endl;
	cout<<"Addition of matrices"<<endl<<add<<endl<<endl;
	cout<<"Substraction of matrices"<<endl<<sub<<endl<<endl;
	cout<<"Muliplication of matrices"<<endl<<mul<<endl<<endl;
	
	

	
	
}