#include <iostream>
#include <cstring>
using namespace std;
class  student {
	public :
		int rollno;
		char * name;
	public :
		student (int r,char * n){
			rollno=r;
			cout<<"roll number in the default cons="<<rollno<<endl;
			int len =strlen(n);
	   		name=new char [len+1];
	   		strcpy(name,n);
		}
		student (const student & obj){
			rollno=obj.rollno;
			int len =strlen(obj.name);
	   		name=new char [len+1];
	   		strcpy(name,obj.name);
			cout <<"the roll no in the copy cons="<<rollno<<endl;
			cout <<"the name in the copy cons="<<name<<endl;
		}
		~student (){
			cout <<"i am a destuctor."<<endl;
		}
};
void f (student obj){
	cout<<"name="<<obj.name<<endl;
}
int main (){
	{
	student s1(80,"ali");
	cout<<endl
	student s2(s1);
	f(s1);
	}
}
