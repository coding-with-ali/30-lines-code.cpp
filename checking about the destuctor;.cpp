#include <iostream>
using namespace std;
int i=1;
class ali{
	public:
		ali(){
			cout<<"i am the constuctor of the a"<<i<<endl;
		}
		int increment (){
			i++;
			cout<<endl<<"i am now increment and my value in function is="<<i<<endl;
			return i;
		}
		~ali(){
			cout<<endl<<"the value of i in destuctor"<<i-1<<" ="<<i<<endl;
		}
};
int main (){
	ali a1;
	a1.increment();
	cout<<"after the object is created the value of i="<<i;
	ali a2;
	a2.increment();
	
}
