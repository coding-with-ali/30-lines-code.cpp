#include <iostream>
using namespace std;
class student {
	private:
		static int roll;
	public:
		student ();
		~student ();
		static int  fforroll(){
			return roll;
		}	
		static void display(){
			cout<<"the number of student is "<<roll<<endl;
		}
};
student :: student (){
	roll++;
	cout<<"the  student "<<roll <<" is created."<<endl;
}
student :: ~student (){
	cout<<"the student "<<roll << " is destroyed."<<endl;
	roll--;
}
int student :: roll=0;
int main (){
	student s1;
	s1.fforroll();
	s1.display();
	{
	student s2;
	s2.fforroll();
	s2.display();
	}
	student s3;
	s3.fforroll();
	s3.display();
}
