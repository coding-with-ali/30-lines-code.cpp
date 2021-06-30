#include <iostream>
using namespace std;
void sort(int &x,int &y);
int main (){
	int x,y;
	cout<<"enter anu two numbers two be sort:";
	cin>>x>>y;
	sort(x,y);
	cout<<x<<y;
}
void sort(int &f,int &s){
	int temp;
	if(f>s)
	{
		temp=f;
		f=s;
		s=temp;
	}
}
