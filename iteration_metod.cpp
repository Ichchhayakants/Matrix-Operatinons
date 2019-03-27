#include<iostream>
#include<iomanip>
#include<math.h>
#define n 3
using namespace std;
int main()
{
	float a[n][n+1],x[n],aerr,maxerr,t,s,err;
	int i,j,itr,maxitr;
	for(i=0;i<n;i++)
	x[i]=0;
 cout<<"enter the elements of the augmented matrix(rowwise):\n";
 for(i=0;i<n;i++)
 {
 	for(j=0;j<n+1;j++)
 	{
 		cin>>a[i][j];
	 }
 }
 cout<<"enter the alowed error,max itr,:\n";
 cin>>aerr>>maxitr;
 cout<<fixed;
 cout<<"\niteration "<<setw(6)<<" x[1] "<<setw(11)<<" x[2] "<<setw(11)<<" x[3]\n";
 for(itr=1;itr<=maxitr;itr++)
 {
 	maxerr=0;
 
 	for(i=0;i<n;i++)
 	{
 		s=0;
 		
		 for(j=0;j<n;j++)
 			if(j!=i)
 			s+=a[i][j]*x[j];
 			t=(a[i][n]-s)/a[i][i];
 			err=fabs(x[i]-t);
 			if(err>=maxerr)
 			maxerr=err;
 			x[i]=t;
 	}
 	cout<<setw(5)<<itr;
 	for(i=0;i<n;i++)
    cout<<setw(11)<<setprecision(4)<<x[i];
    cout<<"\n";
    if(maxerr<=aerr)
    {
   	  cout<<"\nCONVERGES in"<<setw(3)<<itr<<" iterations\n";
   	  for(i=0;i<n;i++)
     	cout<<"x["<<setw(3)<<i+1<<"]= "<<setw(7)<<setprecision(4)<<x[i]<<"\n";
   		return 0;
 	}
 }
  cout<<"solution does not converges, iterations not sufficient\n";
 return 1;
 
}
