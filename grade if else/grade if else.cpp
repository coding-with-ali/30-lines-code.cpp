#include <iostream>
using namespace std;
int main ()
{
	int marks;
	cout <<"enter your marks. ";
	cin>>marks;
	if (marks>=90)
	cout <<"A grade";
		else 
			if(marks>=90)
			cout<<"B grade";
				else
					if(marks>=80)
					cout<<"C grade";
						else
							if (marks>=70)
							cout<<"D grade";
								else 
								cout<<"F grade.";
	return 0;							
				
}
