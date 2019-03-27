#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

class Matrix
{
 public :
 int Row ;
 int Colms;
 int **Mat,a[100];
 Matrix();						             // Default constructor
 Matrix(int Row,int Colms);			// Parameterized constructor
 Matrix(const Matrix &B);		       // Copy Contructor
 ~Matrix();						      // Destructor

 int Read_Matrix();
 void Display();
 /*Complex Conjugate();
 Complex operator + (Complex Obj1);
 Complex operator - (Complex obj1);
 Complex operator * (Complex obj1);
 Complex operator / (Complex Obj1);*/

};
