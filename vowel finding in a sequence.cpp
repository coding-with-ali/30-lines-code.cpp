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
	cout <<"enter a sequence of character with end 9:";
	bool e=false;
	while (e==false)
	{
	cin >>a;
	bool s=isvowel (a);
	if (s==1)
	vowel++;
	else if (a=='9')
	e=true;
	else 
	nonvowel++;
	}
	cout <<"the sequence consists of "<<nonvowel+vowel<<" words."<<endl;
	cout <<"there are "<<vowel<<" vowels in this sequence.";
	return 0;
}

