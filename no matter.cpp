#include <iostream>
using namespace std;
class person{
  private:
  int age;
  string name;
  public:
  person():age(9){
    
  }
  int getage()const{
    return age;
  }
};
class student :  person{
  private:
  int roll;
  public:
  void print(){
    cout<<"age="<<getage();
  }
};
int main (){
  student s1;
  s1.print();
}

