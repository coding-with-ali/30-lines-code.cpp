#include <iostream>
using namespace std;
class student{
	private:
		int roll;
		static int noofstudent;
	public:
		static int getnumberofstudent();
		student (int r){
			roll=r;
			noofstudent=getnumberofstudent();
		}
		void displayr(){
			cout<<"roll="<<roll<<endl;
		}
		static void display(){
			cout<<"the number of the student ="<<noofstudent<<endl;
		}
		~student (){
			noofstudent--;
		}
};
//int student :: noofstudent;
int student :: getnumberofstudent(){
	return noofstudent++;
}
int main (){
	student s1(4);
	s1.display();
	s1.displayr();
	student s(3);
	s.display();
	s.displayr();
}
