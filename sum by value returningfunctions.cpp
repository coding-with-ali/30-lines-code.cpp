#include <iostream>
using namespace std;
int sum (int n1,int n2);
int main ()
{
	int a,b;
	cout <<"enter first number:";
	cin >>a;
	cout <<"enter second number:";
	cin >>b;
	int add=sum (a,b);
	cout <<"sum of the number is "<<add;
	return 0;
	
}
 int sum (int n1,int n2)
 {
 	int	addition=n1+n2;
 	return addition;
 }
