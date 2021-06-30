#include <iostream>

using namespace std;

double power(double n,int p=2);

int main (){
cout<<	power(3);
	
}
double power(double n,int p){
	double pow=1;
	for (int i=1;i<=p;i++)
	pow*=n;
	return pow;
}
