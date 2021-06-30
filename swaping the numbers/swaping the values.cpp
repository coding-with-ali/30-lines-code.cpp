//program for swaping values.

#include <iostream>
using namespace std ;
int main ()
{
	int num1,num2,temp;
	cout <<"this program is to interchange the value of two number. \n";
	cout<<"enter first value= ";
	cin>>num1;
	cout<<"enter second value= ";
	cin>>num2;
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<endl<<endl;
	cout <<"the number after swaping.\n";
	cout <<"first value= "<<num1<<endl;
	cout <<"second value= "<<num2;
	return 0;	
}
