#include <iostream>
#include <string>
using namespace std;
class student{
	private:
		string name="ali";
		int rollno=60;
	public:
		student():name(" "),rollno(0){
		}
		student(string n,int r):name(n),rollno(r){
		}
	void getdata(){
		cout <<"enter name:";
		cin>>name;
		cout <<endl;
		cout <<"enter roll number:";
		cin>>rollno;
	}
	void showdata(){
		cout <<"name="<<name<<endl;
		cout <<"roll number="<<rollno<<endl;
	}
		void showdata(){
		cout <<"name="<<name<<endl;
		cout <<"roll number="<<rollno<<endl;
	}
	void add_data(student);
};
void student :: add_data(student s2){
	if (rollno<0)
	rollno=-rollno;
}

int main (){
	student s1,s3;
	student s2("haxrat ali",60);
	
	 s1.getdata();
	 s3.add_data(s1);
	cout <<"\nstudent s1:";
	s1.showdata();
	cout <<"\nstudent s2:";
	s2.showdata();
	cout <<"\nstudent s3:";
	s3.showdata();
	return 0;
}
