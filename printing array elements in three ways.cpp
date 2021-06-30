#include <iostream>
using namespace std;
int main ()
{
	int x[]={3,4,5};
	int *ptr=x;
	cout<<"array 1="<<*ptr<<"="<<ptr[0]<<endl;
	cout<<"array 2="<<*(ptr+1)<<"="<<ptr[1]<<endl;
	cout<<"array 3="<<*(ptr+2)<<"="<<ptr[2]<<endl;
	
	for (int i=0;i<3;i++){
		cout<<*(ptr+i)<<"="<<ptr[i]<<endl;
	}
	
}
