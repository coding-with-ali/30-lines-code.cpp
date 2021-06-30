#include <iostream>
using namespace std;
int factorial (int r);
int main ()
{
	int r;
	cout <<"enter a number=";
	cin>>r;
	int f=factorial (r);
	cout<<"the factorial of "<<r<<" ="<<f;
}
int factorial (int r)
{
	int fact=1;
	for (int i=1;i<=r;i++)
	{
		fact=fact*i;
	}
	return fact;
}
