#include <iostream>
using namespace std;
int main (){

	const int nc=3;
	const int nr=3;
	int m[nr][nc];
	cout<<"enter a 3 by 3 matrics"<<endl;
		for (int i=0;i<nr;i++){
		for(int j=0;j<nc;j++){
			cin>>m[i][j];
		}
	}
	
//	int m[nr][nc]=	{
//						{1,2,3},
//						{4,5,6},
//						{6,7,8},
//						{9,10,11}
//					};
	for (int i=0;i<nr;i++){
		for(int j=0;j<nc;j++){
			cout<<m[i][j];
		}
		cout<<endl;
	}
}

