#include<iostream>
#include <cstring>
using namespace std;
class Student {
    private:
        int rollno;
        float cgpa;
        char* name;
    public:
        Student(int r,float cg,char* n){
        rollno=r;
        cgpa=cg;
        name=n;
        cout<<"the name of the student :"<<name<<endl;
        cout<<"the roll of the student:"<<rollno<<endl;
        cout<<"the cgpa of the student :"<<cgpa<<endl;
        }
        Student(const Student &obj){
        	cout<<"\n this constructor  is coping the value of the first constructor:"<<endl;
            rollno=obj.rollno;
            cgpa=obj.cgpa;
            int len=strlen(obj.name);
            char*na=new char (len+1);
            strcpy(na,obj.name);
            name=na;
            cout<<"name="<<name<<endl;
            cout<<"roll number="<<rollno<<endl;
            cout <<"cgpa="<<cgpa;
        }
};
int main (){
Student s1(60,3.4,"ali");
Student s2=s1;//we passed all the data of the s1 to s2.
Student s3(s1);//we can also do this.
return 0;
}

