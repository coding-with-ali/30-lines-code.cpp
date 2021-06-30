// NAME = HAZRAT ALI                    ROLL NO = 60                    CLASS= BCS (1st SAMESTER)
#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	float w,l,cr;                                      //w=width, l=length,  cr=circle ridus
	char a;	
	cout <<"Press r to calculate the area of a rectangle.\n";
	cout <<"Press c to calculate the area of a circle. "<<endl;
	cout <<"character=";
	cin >>a;                                           //this will take a charecter value from the user
	if (a=='r'){	                                    //we write it r in quotation bcz this is char data type
	cout <<"you want to find the area of a rectangle.\n";
	cout <<"enter the length=";
	cin >>	l;
	cout <<"Enter the width=";
	cin>>w;
	cout <<"the area of the rectangle="<<w*l;
	}
	else 
	if (a=='c')	{
	cout<<"you want to find the area of a circle\n";
	cout <<"enter the radius=";
	cin >>cr;
	cout <<"the area of the circle ="<<(22/7)*(cr*cr);
	}
	getch ();
	return 0;
}
