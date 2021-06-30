#include <iostream>
using namespace std;
int main (){
	int p;
	float total=0.0;
	cout<<"enter the number of elements:";
	cin>>p;
	float arra[p];
	float *pt=arra;
	
	cout<<"enter all numbers:";
	for (float *ptr=pt;ptr<&arra[p];ptr++){
		cin>>*pt++;
		total+=*ptr;	
	}
cout<<"total="<<total;
}
