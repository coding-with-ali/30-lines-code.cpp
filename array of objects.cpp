#include <iostream>
using namespace std;
class student {
	private:
		int rollno;
		float cgpa;
	public:
		student (int r,float c){
			rollno=r;
			cgpa=c;
			cout<<"constructor."<<endl;
		}
		void display(){
			cout<<"roll no="<<rollno<<endl;
			cout<<"cgpa="<<cgpa<<endl;
		}
};
int main (){
	student s[2]={student (3,4),student (2,4)};
	s[0].display();
	s[1].display();
}
