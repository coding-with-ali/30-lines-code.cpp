#include <iostream>
using namespace std;
int main (){
	int arr1[]={3,4,5};
	int arr2[]={4,5,3};
	int size1=sizeof (arr1)/sizeof (int );
	int size2=sizeof (arr2)/sizeof (int);
	int tsize=size1+size2;
	int *arr3=new int [tsize];
	for (int i=0;i<size1;i++){
		arr3[i]=arr1[i];
	}
	int j=0;
	
	int r= sizeof(arr3)/sizeof (int);arr3=arr3+r;
	for (int i=0;i<size2;i++){
		arr3[size1]=arr1[j];
		j++;
	}
	for(int i=0;i<tsize;i++){
		cout<<arr3[i];
	}
	
}
