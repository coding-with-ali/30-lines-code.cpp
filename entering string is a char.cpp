#include <iostream>
#include <cstring>
using namespace std;
int main (){
	char firstname[8];
	char secondname[8];
	cout<<"enter your first name:";
	cin.getline(firstname,8);
	cout<<"enter your second name:";
	cin.getline(secondname,8);
	cout <<"your fullname =";
	cout<<strcat(firstname,secondname);  
}
