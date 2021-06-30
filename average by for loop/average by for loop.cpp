#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int a,sum=0,n,average,r=0;
	char c='y';
	while (c=='y')
	{   
		cout <<"enter  number=";
		cin>>n;
		r++;
		sum=sum+n;
		if (r!=0)
		average=sum/r;
		cout<<"enter y to input another no or n to terminate=";
		cin>>c;		
	}
	cout<<"total number="<<r<<endl;
	cout<<"sum="<<sum<<endl;
	cout<<"average="<<average;
	return 0;
}
