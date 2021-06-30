#include <iostream>
using namespace std;
int main ()
{
	int a ,r;
	cout <<"Enter a number=";
	cin>>a;
	r =a%2;
	if (r==1)
	cout<<a<<" is odd number.";
	else 
	cout <<a<<" is even.";
	return 0;
}
