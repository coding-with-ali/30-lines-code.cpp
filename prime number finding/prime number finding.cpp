#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int i,n;
	int count =0;
	cout <<"enter a number=";
	cin >>n;
	for (i=1;i<=n;i++)
	{
		if (n%i==0)
		count++;
	}
	if (count==2)
	cout<<n<<" is prime number.";
	else 
	cout <<n<<" is not prime number.";
	return 0;
}
