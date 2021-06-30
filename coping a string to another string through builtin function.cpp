#include<iostream>
#include <cstring>
using namespace std;
int main (){
	char str[6];
	cout <<"enter a string :";
	cin.getline(str,6) ;
	char copystr[6];
	strcpy(copystr,str);
	cout<<"after coping the string is same as "<<copystr;
}
