#include <iostream>
#include <cmath>
using namespace std;
int  main (){
	int n=10;
	int x;
	for (int j=1;j<=n;j++){
		int count=0;
	for (int i=1;i<=j;i++){
		if (j%i==0)
			count++;
	}
	if (count==2){
		 x=pow(2,j-1)*(pow(2,j)-1);
		cout<<x<<endl;
	}
	}
}

