#include <iostream>
using namespace std;
/*void area(int x,int y,float pi=3);*/void area(int x,int y,float pi=3){
	int area=pi*x*y;
	cout<<area;
}

int main (){
	int x=4;
	int y=3;
	float pi;
	area(x,y);
}

