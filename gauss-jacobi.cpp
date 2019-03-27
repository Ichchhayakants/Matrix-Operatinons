#include<iostream>
#include<math.h>
using namespace std;
#define n 4
int main()
{
	double A[n][10],X[10][5];
	int i,j,m;
	cout<<"enter the no of equation:";
	cin>>m;
	cout<<"enter the matrix (rowwise):\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
	   	  cin>>A[i][j];
        }
	 }
	 
	
  cout<<"entered matrix:\n";
  for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
	   	  
		  cout<<A[i][j]<<"x"<<j<<"\t";
        }
       cout<<"\n"; 
	 }	
	 
	  
	for(i=0;i<n;i++)
	  {
	  	for(j=0;j<m;j++)
	  	{
	  	 if(j=n)
			  X[i][j]=A[i][j]/A[i][i];
		
		  }
	   }
	   for(i=0;i<n;i++)
	   {
	   		for(j=0;j<m;j++)
	   		{
			
	   cout<<X[i][j]<<"\n";
}
}
	   return 0; 
	
}
