#include <iostream>
using namespace std;
int main ()
{
	int n1,n2,n,prime1,prime2,prime,hcf,m;
		int count1=0;
		int count2=0;
	cout <<"enter first number:";
	cin>>n1;
	cout <<"enter seconf number:";
	cin >>n2;
	if (n1>n2)
	m=n1;
	else 
	m=n2;
	for (int i=1;i<=m;i++)
	{
		for (int j=1;j<=m;j++)
		{
			int d=n1/j;
			for (int k=1;k<=d;k++)
			{
				int e=d%k;
				if (e==0)
				count1++;
				if (count1==2)
				prime1=d;
				else 
				prime1=1;
				for (int l=1;l<=m;l++)
				{
				int f=n2/l;
				for (int m=1;m<=f;m++)
				{
				int g=f%m;
				if (g==0)
				count2++;
				if (count2==2)
				prime2=f;
				else 
				prime1=1;
				}
				if (prime1==prime2)
					prime=prime*prime1;
			}
		}
	}
}
	cout <<"hcf="<<prime;
	return 0;
}
