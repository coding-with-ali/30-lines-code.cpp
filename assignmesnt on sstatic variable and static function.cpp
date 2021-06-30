#include <iostream>
using namespace std;
class student {
	private:
	static	int nos;
	public:
		student (){
			nos++;
		}
		
	static	void display(){
			cout<<"nos="<<nos<<endl;
			
		}
		~student (){
			nos--;
		}
};
int student :: nos;
int main (){
	{
	student s1;
	s1.display();
	}
	student s2;
	s2.display();
	
}



