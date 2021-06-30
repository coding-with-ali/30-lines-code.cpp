#include <iostream>
using namespace std;
int main (){
	char ch;
	char che;
	cout<<"ente a char:";
	cin>>ch;
	if (ch>=65 and ch<=90)
	 che='u';
	else if (ch>= 97 and ch<=122)
	 che='l';
	else if (ch >=48 and ch<=57)
	 che ='n';
	else if (ch >=0 and ch <47 or  ch>57 and ch<65 or ch>=91 and ch<=96 or   ch<=123 and ch<127 )
	 che ='s';
	switch(che){
		case 'u':
		cout<<ch<<" is upper case letter.";
		break;
		case 'l':
		cout<<ch<<" is loweer case letter.";
		break;
		case 'n':
		cout<<ch<<" is a number.";
		break;
		case 's':
		cout<<ch<<" is special character(symbol).";
		break;	
	}
	return 0;
}
