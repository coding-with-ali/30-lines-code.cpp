#include <iostream>
using namespace std;
class student {
	private:
		int	rollno;
		int age;
	public:
		student ():rollno(0),age(0){
		}
		student (int r,int a):rollno(r),age(a){
		}
	void showdata(){
		cout<<"\nrollno="<<rollno;
		cout<<"\nage="<<age;
	}
};
int main (){
	student s1;
	s1.showdata();
	student s2(34,45);
	s2.showdata();
	student s3(s2);
	s3.showdata();
	student s4=s2;
	s4.showdata();
}
