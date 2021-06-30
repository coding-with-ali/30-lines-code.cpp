#include <iostream>
using namespace std;
int main (){
	int n;
	int n1=0;
	int n2=1;
	int n3=0;
	cout<<"how much fibonnici number should i have to print:";
	cin>>n;
	cout<<n1<<","<<n2<<",";
	for (int i=0;i<n-2;i++){
		n3=n1+n2;
		cout<<n3<<",";
		n1=n2;
		n2=n3;
	}
	return 0;
}
