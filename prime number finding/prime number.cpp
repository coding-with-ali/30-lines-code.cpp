#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int i,n;
	
	
	for(int j=1;j<=100;j++){
	int count =0;
		n=j;
	
	for (i=1;i<=n;i++)
	{
		if (n%i==0)
		count++;
	}
 	if (count==2)
	cout<<n;
	}
}
