#include<iostream>
using namespace std;
int main()
{
	char a;
	int vowel=0;
	int count=0;
	while(a!='*')
	{ 
	cout<<"Enter a character: ";
	cin>>a;
	cout<<endl;
	if (a=='*')
	break;
	if (a=='a' or a=='e' or a=='i' or a=='o' or a=='u' or 
	a=='A' or a=='E' or a=='I' or a=='O' or a=='U')
	vowel++;
	else count++; 
	}
	cout<<"Vowels = "<<vowel<<endl;
	cout<<"Consnants = "<<count<<endl;
}
