#include <iostream>
long factorial(long n);
using namespace std;
int main ()
{
	int number;
	cout <<"enter a number to find factorial:";
	cin >>number;
	cout <<"factorial="<<factorial (number);
	return 0;
}

long factorial(long n)
{
	if (n==0 or n==1)
	return (1);
	else if (n>1)
	return n*factorial (n-1);
}
