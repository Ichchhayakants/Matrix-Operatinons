#include<iostream>
#include<math.h>
#include<stdlib.h>
#include "Matrix.hpp"


using namespace std;


Matrix::Matrix()							// Default constructor
{
 Row = 0 ;
 Colms = 0 ;
}


Matrix::Matrix(int Row,int Colms)				// Parameterized constructor
 {
 if((Row<1)||(Colms<1)) exit(1);
 Mat=new int *[Row];
 if(Mat==NULL) exit(2);
 for(int j=0;j<Row;j++)
 {
 	Mat[j]=new int[Colms];
 	if(Mat[j]==NULL) exit(3);
 }
}
Matrix::Matrix(const Matrix &B)				// Copy Contructor
{
 Mat=new int *[B.Row];
 if (Mat==NULL) exit(1);
 for(int j=0;j<B.Row;j++)
  {
    Mat[j]=new int [B.Colms];
    if(Mat[j]==NULL) exit(2);
    Row = B.Row ;
    Colms = B.Colms ;
    for(int m=0;m<Row;++m)
      for(int n=0;n<Colms;++n)
      Mat[m][n]=B.Mat[m][n];
 }
}


Matrix::~Matrix()							// Destructor
{
 for(int j=0;j<Row;j++)
 {
 	delete []Mat[j];
 	delete []Mat;
 }
}
 int Matrix::Read_Matrix()
{
  char filename[20];
  int input[100];
  int x;
  cout<<"enter the file name";
  cin>>filename;
  fstream sharma;
  sharma.open(filename);
  while(!sharma.eof())
  {
  	sharma>>input[x];
  	a[x]=input[x];
	  //cout<<input[x]<<endl;
  	x++;
  }
  sharma.close();
}
void Matrix::Display()
{
	int x;
	 while(x)
	 {
	  cout<<a[x];
	  x++;
    }
}

/*void Matrix::Display()
{
 cout<<Real;
 if(Imag > 0)
   cout<<" + ";
 cout<<Imag ;
 cout<< "i" << endl ;
}


double Complex::Normal()
{
 double Answer = sqrt((Real*Real) + (Imag*Imag) );
 return Answer;
}


Complex Complex::operator + (Complex Obj1)			
{
 Complex Obj3 ;
 Obj3.Real = this->Real + Obj1.Real ;					
 Obj3.Imag = this->Imag + Obj1.Imag ;				
 return Obj3 ;
}


Complex Complex::operator - (Complex Obj1)			
{
 Complex Obj3 ;
 Obj3.Real = this->Real-Obj1.Real ;							
 Obj3.Imag = this->Imag-Obj1.Imag ;				
 return Obj3 ;
}


Complex Complex::operator * (Complex Obj1)				
{
 Complex Obj3 ;
 Obj3.Real =  (this->Real * Obj1.Real) - (this->Imag * Obj1.Imag) ;			
 Obj3.Imag = (this->Real * Obj1.Imag) + (Obj1.Real * this->Imag) ;				
 return Obj3 ;
}


Complex Complex::operator / (Complex Obj1)				
{
 Complex Obj3 ;
 Obj3.Real =((this->Real*Obj1.Real) + (this->Imag*Obj1.Imag) )/ ((Obj1.Real*Obj1.Real) + (Obj1.Imag*Obj1.Imag));			
 Obj3.Imag = ((this->Real * Obj1.Imag) - (Obj1.Real * this->Imag)) / ((Obj1.Real * Obj1.Real) + (Obj1.Imag * Obj1.Imag));				
 return Obj3 ;
}


Complex Complex::Conjugate()
{
 Complex temp(Real , Imag*(-1)) ;
 return temp;
}*/

