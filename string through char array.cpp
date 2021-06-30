#include <iostream>
#include <cstring>
using namespace std;
int main (){
	string str;
	char name1[30],name2[30];
	cout <<"enter a name:";
	cin.getline(name1,30);
	cout <<"the size of the first char array="<<strlen(name1);
	cout <<endl;
	strcpy(name2,name1);
	cout <<"the size of the second char array="<<strlen(name2);
	return 0; 
}
