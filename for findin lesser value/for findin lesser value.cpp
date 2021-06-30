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
	if (n1<n2 && n1<n3)
	cout <<n1<<" is less than"<<n2<<" and"<<n3;
	if (n2<n1 && n2<n3)
	cout <<n2<<" is less than"<<n3<<" and "<<n1;
	if (n3<n1 && n3 <n2)
	cout <<n3<<" is less than "<<n1<< " and "<<n2;
	return 0;
	getch (); 
}
