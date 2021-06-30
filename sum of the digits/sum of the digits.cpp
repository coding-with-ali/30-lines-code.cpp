#include <iostream>
using namespace std;
int main()
{
	int num,unit,tenth,hundredth,sum;
	cout<<"enter a number = ";
	//the compiler have to find the digits.
	cin>>num;
	unit=num%10;
	tenth=(num/10)%10;
	hundredth=num/100;
	cout<<"unit place="<<unit<<endl;
	cout <<"tenth place="<<tenth<<endl;
	cout<<"hundredth place="<<hundredth<<endl;
	sum=unit+tenth+hundredth;
	cout <<"the sum of the digits ="<<sum;
	return 0;
}
