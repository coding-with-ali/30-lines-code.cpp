#include <iostream>
using namespace std;
int main ()
{
	int marks;
	cout <<"Enter your marks=";
	cin >>marks ;
	if (marks<100 && marks>=91)
	cout <<"A+ grade.";
	if (marks<91 && marks>=85)
	cout <<"A grade.";
	if (marks<85 && marks>=80)
	cout <<"B+ grade.";
	if (marks<80 && marks>=75)
	cout <<"B grade.";
	if (marks<75 && marks>=70)
	cout << "C+ grade.";
	if (marks<70 && marks>=65)
	cout <<"C grade.";
	if (marks < 65)
	cout <<"you are failed in this subject.";
	return 0;
}
