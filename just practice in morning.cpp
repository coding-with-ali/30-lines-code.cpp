#include <iostream>
using namespace std;
class student {
	private:
		int roll;
		char* name;
		static	int al;;
	public:
		student(){
			roll=0;
			name=NULL;
		}
		static void g();
	static	void display(){
			cout<<al;
		}
};
void student::g(){
	 al=8;
}
int main (){
	student s1,s2,s3;
//	s3.al=s1.al+s2.al;
	student::g();
	s3.display();
}
