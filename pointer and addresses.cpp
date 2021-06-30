#include <iostream>
using namespace std;
int main (){
	cout <<"this program is to illustrate the use of pointers and addresses:";
	int variable;
	int *pointer;
	variable=45;
	pointer=&variable;
	cout <<"the value of variable is mentioned is "<<variable<<endl;
	cout<<"the address of this variable is  "<<&variable<<endl;
	cout <<"the pointer which stored the address of variable is "<<pointer<<endl;
	cout <<"the content of the pointer can be accessed by asterik sign before the pointer "<<*pointer<<endl;
	cout<<"if we change the content of the  pointer the value of the variable is also change "<<endl;
	*pointer=34;
	cout<<"now the value of the variable is changed coz of the change in the content of the pointer "<<variable;
}
