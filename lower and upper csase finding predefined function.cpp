#include <iostream>
#include <cctype>
using namespace std;
int main ()
{
	char ch;
	cout <<"enterr a character to find lower or upper=";
	cin >>ch;
	if (islower(ch))
	cout <<"lower case";
	else if (isupper(ch))
	cout <<"upper";
	else 
	cout <<"none";
	return 0;
}
