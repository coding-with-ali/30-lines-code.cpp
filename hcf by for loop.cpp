#include <iostream>
using namespace std;
int main ()
{
	int n1,n2,prime1=1,prime2=1,prime,a,hcf=1;
	cout <<"enter first number:";
	cin >>n1;
	cout <<"enter second number:";
	cin>>n2;
	if (n1>n2)
	a=n1;
	else 
	a=n2;
	for (int i=1;i<=a;i++)
	{
		int counter1=0;
		int counter2=0;
		for (int j=1;j<=a;j++)
		{
			int c=n1%n2;
			if (c==0)
			counter1++;
			if (counter1==2 )
			prime1=n1;
			else 
			prime1=1;
		
			for (int k=1;k<=a;k++)
		{
			int d=n2%k;
			if (d==0)
			counter2++;
			if (counter2==2)
			prime2=n2;
			else 
			prime2=1;
		}
		}
		
		if (prime1=prime2)
	       hcf=prime1*prime2;
	}
	cout <<"heigst common factor="<<hcf;
}
