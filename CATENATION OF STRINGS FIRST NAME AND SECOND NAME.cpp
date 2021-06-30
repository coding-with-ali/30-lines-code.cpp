#include <iostream>
#include <cstring>
using namespace std;
int main (){
	string str;
	char name1[30],name2[30];
	cout <<"enter first  name:";
	cin.getline(name1,30);
	cout <<"enter second name:";
	cin.getline(name2,30);
	cout <<"the full name ="<<strcat(name1,name2);
	return 0; 
}
