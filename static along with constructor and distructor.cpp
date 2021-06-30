#include <iostream>
using namespace std;
class student {
	public:
		static int nos;
		student ();
		~student ();
		
};
int student :: nos;
student :: student (){
	nos++;
}
student :: ~student(){
	nos--;
}
int main (){
//	student s;
	cout<<student::nos<<endl;
}
