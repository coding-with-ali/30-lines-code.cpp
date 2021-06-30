//This program is to find if the value is odd or an even.
//this program uses only if statnent.

#include <iostream>
using namespace std;
int main ()
{
	int num,rem;                                              //declaration of variables
	cout<<"This program is used to find odd and even.\n";     //this statment will be displayed on screen
	cout<<"Enter a value= ";
	cin >>num;                                                //this will assign the input value to the num variable.
	rem=num%2;                                                //this will calculate the remainder
	if (rem=0)                                               //this will compare the rem with 0
	cout <<num<<" is an even number.";
	if (rem=1)                                                //this will compare the rem with 1
	cout <<num<<" is an odd number.";
	return 0;
}
