#include <iostream>
using namespace std;
int main (){
	int sellp,costp;
	cout<<"enter the selling price:";
	cin>>sellp;
	cout<<"enter the cost price :";
	cin>>costp;
	if (costp<sellp){
		cout<<"the profit is ";
		float profit=sellp-costp;
		profit=(profit/100)*costp;
		cout<<profit<<" percent.";
	}
	else if (costp>sellp){
		cout<<"the loss is ";
		float loss=costp-sellp;
		loss=(loss/100)*costp;
		cout<<loss<<" percent";
	}
}
