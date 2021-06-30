#include <iostream>
#include <cmath>
using namespace std;
bool isnumberpylandrome (int num);
int main ()
{
	int number;
	cout <<"enter  a number:";
	cin >>number;
	cout<<isnumberpylandrome (number);	
	return 0;	
}
bool isnumberpylandrome (int num)
{
	int pwr=0;
	if (num<10)
	return true;
	else {
		while (num/static_cast <int> (pow(10.0,pwr))>=10)
		pwr++;
		cout<<pwr;
		while (num>=10)
		{
			int tentopwr=static_cast <int>(pow(10.0,pwr));
			if ((num/tentopwr)!=(num%10))
			return false;
			else 
			{
				num=num%tentopwr;
				num=num/10;
				pwr=pwr-2;
			}
		}
		return true;
	}
	
}
