#include<iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int n1,n2,n3;
	cout <<"Enter three numbers.\n";
	cout<<"Enter first number=";
	cin>>n1;
	cout<<"Enter second number=";
	cin >> n2;
	cout <<"Enter third number=";
	cin >>n3;
	if (n1>n2 && n1>n3)
	cout <<n1<<" is greater than "<<n2<<" and "<<n3;
	else if (n2>n1 && n2>n3)
	cout <<n2<<" is greater than "<<n3<<" and "<<n1;
	else if (n3>n1 && n3 >n2)
	cout <<n3<<" is greater than "<<n1<< " and "<<n2;
	getch();
	return 0; 
}
