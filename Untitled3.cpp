#include<iostream>
using namespace std;

class Matrix{
public:
    int rows;
    int cols;
    int data[rows][cols];

    Matrix(){
        rows = 0;
        cols = 0;
    }

    Matrix(int r, int c){
        rows = r;
        cols = c;
    }

    friend istream& operator>>(istream &in, Matrix &mat)
    {
        int i, j;
        for(i = 0; i < mat.rows; i++)
        {
            for(j = 0; j < mat.cols; j++)
            {
                in >> mat.data[i][j];
            }
        }
        return in;
    }
};

int main(){
    Matrix m1(2, 3);
    Matrix m2(3, 2);

    cin >> m1;

    return 0;
}