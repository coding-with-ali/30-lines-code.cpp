#include <iostream>
using namespace std;
class student {
	private:
		static int noofstud;
	public:
		student ();
		~student ();
		static int  ffornoofstud(){
			return noofstud;
		}	
		static void display(){
			cout<<"the number of student is "<<noofstud<<endl;
		}
};
student :: student (){
	noofstud++;
	cout<<"the  student "<<noofstud <<" is created."<<endl;
}
student :: ~student (){
	cout<<"the student "<<noofstud << " is destroyed."<<endl;
	noofstud--;
}
int student :: noofstud=0;
int main (){
	student s1;
	s1.ffornoofstud();
	s1.display();
	{
	student s2;
	s2.ffornoofstud();
	s2.display();
	}
	student s3;
	s3.ffornoofstud();
	s3.display();
}

