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
		default :
		return false;
	}
}
int main ()
{
	int vowel=0;
	int nonvowel=0;
	char a;
	cout <<"enter a sequence of character:";
	while (a!=9)
	{
	
	cin >>a;
	bool s=isvowel (a);
	if (s==0)
	vowel++;
	else 
	nonvowel++;
	}
	cout <<"vowels are "<<vowel;
	return 0;
}

