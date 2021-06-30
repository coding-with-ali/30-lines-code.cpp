#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
class String {
	private:
		string name;
		//////
		int valueofeachchar;
		char uppercasechar;
		char lowercasechar;
		int i;
		int j;
		
	public:
		String (){
			i=0;
			j=0;
		}
		void touppercas (string na){
			name=na;
			int ssize=name.size();
			char * ch=new char [ssize+1];
			strcpy(ch,&name[0]);
			char * charptr=ch;
			char * uppercasearray=new char[ssize+1];
			for (char *ptr1=charptr;ptr1<=&ch[ssize];ptr1++){
			valueofeachchar=toupper(*ptr1);
			uppercasechar=static_cast<char>(valueofeachchar);	
			uppercasearray[i++]=uppercasechar;
			}
			cout<<"the string in the uppercase is ="<<uppercasearray<<endl;
		}
		void tolowercas(string nam){
			name=nam;
			int ssize=name.size();
			char * ch=new char [ssize+1];
			strcpy(ch,&name[0]);
			char * charptr=ch;
			char * lowercasearray=new char[ssize+1];
			for (char *ptr1=charptr;ptr1<=&ch[ssize];ptr1++){
			valueofeachchar=tolower(*ptr1);
			lowercasechar=static_cast<char>(valueofeachchar);	
			lowercasearray[j++]=lowercasechar;
			}
			cout<<"the string  in the lowercase is ="<<lowercasearray<<endl;
		}
		void catenate(string nam1,string nam2){
			int size1=nam1.size();
			int size2=nam2.size();
			char *c1=new char[size1+1];
			char *c2=new char[size2+1];
			strcpy(c1,&nam1[0]);
			strcpy(c2,&nam2[0]);
			cout<<"the name in the catenated form is :"<<strcat(c1,c2);
			}
};
int main (){
	string name;
	string name2;
	cout<<"enter a string in the lower case:";
	getline (cin,name);
	String s1;
	s1.touppercas(name);
	cout<<"enter string in the upper case:";
	getline(cin,name2);
	s1.tolowercas(name2);
	s1.catenate(name,name2);
	return 0;
}
