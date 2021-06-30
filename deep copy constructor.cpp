#include <iostream>
#include <cstring>
using namespace std;
class student {
	private:
		int rollno;
		char * name;
	public:
	   student (){
	
	   }
	   student (char* n,int r){
	    rollno=r;
	   	int len =strlen(n);
	   	name=new char [len+1];
	   	strcpy(name,n);
	   }
	   student (const student & obj){
	   	 rollno=obj.rollno;
	   	 
	   	int len =strlen(obj.name);
	   	name=new char [len+1];
	   	strcpy(name,obj.name);
	   }
	   void display(){
	   	cout <<"name="<<name<<endl;
	   	cout<<"roll no="<<rollno<<endl;
	   }
};
int main (){
	student s1("shams",30);
	s1.display();
	student s2(s1);
	s2.display();
	student s3(s1);
	s3.display();
}
