#include <iostream>
#include <cstring>
using namespace std;
class Student {
	private:
		int rollno;
		char* name;
	public:
		Student (int r,char* n){
			int len=strlen(n);
			n=new char (len+1);
			strcpy(name,n);
			rollno=n;
		}
		Student (const Student &obj);{
		cout<<"i am copy constructor.";
		rollno=obj.rollno;
		name=obj.name;
		}
		void show(){
			cout<<"the name of the student in constructor:"<<name;
			cout<<"the roll number of the student in "<<rollno;
		}
};
int main(){
	Student s1(32,"ali");
	Student s2=s1;
	
}
