#include <iostream>
using namespace std;
int main (){
	int r;
	int count;
	int n;
	cout<<"enter a number to find the prime numbers up to that number:";
	cin>>n;
	for (int i=1;i<=n;i++){
	 count=0;
		for (int j=1;j<=i;j++){
			r=i%j;
			if (r==0)
			count++;
		}
		if (count==2)
		cout<<i<<",";	
	}
	return 0;
}
