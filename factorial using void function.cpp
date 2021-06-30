#include <iostream>
using namespace std;
void factorial (int x);
int main ()
{
	int n;
	cout <<"enter a number to find factorial";
	cin >>n;
	factorial  (n);
	return 0;
}
void factorial (int x)
{
	int fact =1;
	for (int i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	cout <<"factorial of "<<x<<" is "<<fact;
}
