#include <iostream>
#include <cmath>
using namespace std;
using namespace std;
int aosquare (int x);
int aorectangle (int x,int y);
double aotraingle (double x,double y,double z);
int main ()
{
	char ch;
	int l,w,side;
	double s2,s1,s3;
	cout <<"enter S ,R, or T:";
	cin>>ch;
	switch (ch)
	{
		case 's':
		case 'S':
		cout <<"you want to find the area of square."<<endl;
		cout <<"enter the length of one side:";
		cin >>side;
		cout <<"area of the square of side lengh "<<side<<" is "<<aosquare(side);
		break ;
		case 'r':
		case 'R':
		cout <<"you want to find the area reactangle:"<<endl;
		cout <<"enter the width:";
		cin>>w;
		cout <<"enter the lenght:";
		cin >>l;
		cout <<"the area of rectangle of width "<<w<<"and length "<<l<<" is ";
		cout <<aorectangle(w,l);
		break;
		case 't':
		case 'T':
		cout <<"you want to find the area of traingle."<<endl;
		cout <<"enter the side1:";
		cin>>s1;
		cout <<"enter the side2:";
		cin >>s2;
		cout <<"enter the side3:";
		cin >>s3;
		cout <<"area of traingle of sides "<<s1<<" "<<s2<<" "<<s3<<" is "<<aotraingle(s1,s2,s3);
	}
		return 0;	
}
	
	int aosquare (int x)
	{
		return x*x;
	} 
	int aorectangle (int x,int y)
	{
		return x*y;
	}
	double aotraingle (double x,double y,double z)
	{
		double s=(x+y+z)/2;
		double area=sqrt((s-x)*(s-y)*(s-z));
		return area;
	}

