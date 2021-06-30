#include <iostream>
using namespace std;
int main ()
{   int vowel=0;
int counter=0;
	char a;
	while (a!='*')
	{cout<<"Enter a character: ";
	cin>>a;
	counter++;
	cout<<endl;
	switch (a)
	{case 'a':
	case 'i':
		case 'e':
			case 'o':
				case 'u':
	vowel++;
	}
	}
cout<<"Vowels = "<<vowel;
cout<<endl;	
cout<<"Consnants = "<<counter-vowel-1;
}
