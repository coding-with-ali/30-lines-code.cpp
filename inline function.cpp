#include <iostream>
using namespace std;
 int multiply(int m,int n);
int main (){
	int x,y;
	x=45;
	y=3;
	int u=multiply(x,y);
	cout<<u;
}
 int multiply(int m,int n){
	return  m*n;
}
