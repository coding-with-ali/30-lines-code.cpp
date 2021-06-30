#include <iostream>
#include <cstring>
using namespace std;
class student{
	public:
		int rollno;
		char* name;
	public:
		student (char* n,int r){
		rollno=r;
		int len=strlen(n);
		name= new char [len+1];
		strcpy (name,n);
		}
		student (const student &obj){
			cout <<"i am a copy constructor."<<endl;
			rollno=obj.rollno;
			int len=strlen(obj.name);
			name=new char [len+1];
			strcpy(name,obj.name);
		}
		
	void	showdata(student s1);
		~student (){
			cout<<"i am destuctor."<<endl;
			delete [] name;
		}
};
void student ::  showdata(student s1){
	cout<<"the name of the student is ="<<s1.name<<endl;
	cout<<"the rollno of the student is ="<<s1.rollno<<endl;
}
int main (){
	
		student s1("ali",60);
		s1.showdata(s1);
	
}
