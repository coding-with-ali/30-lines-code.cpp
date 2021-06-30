#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int number,fact=1;
	cout <<"Enter a number=";
	cin >>number;
	for (int i=number; i>=1 ; i--)
	{
		fact=fact*(i);
	}
	cout<<"the factorial of "<<number<<" ="<<fact;
	return 0;
}
