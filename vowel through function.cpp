//program for finding vowels;
#include <iostream>
using namespace std;
char isvowel(char alphabit)
{
	switch (alphabit)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		return true;
		break;
		default: 
		return false;
	}
}
int main ()
{
	char a;
	cout <<"enter a character:";
	cin >>a;
	bool s=isvowel (a);
	if (s==1)
	cout <<"vowel";
	else 
	cout<<"not vowel.";
	return 0;
}

