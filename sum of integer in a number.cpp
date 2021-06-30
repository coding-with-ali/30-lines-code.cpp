#include <iostream>
using namespace std;
int main (){
	int n;
	int sum=0,r;
	cout<<"enter a number:";
	cin>>n;
	int temp=n;
	while(n!=0){
		r=n%10;
		sum+=r;
		n=n/10;
	}
	cout<<"sum of the digits in "<<temp<<"="<<sum<<endl;
}
