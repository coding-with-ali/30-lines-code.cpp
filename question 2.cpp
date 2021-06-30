#include <iostream>
using namespace std;
class Distance {
	private:
		int feet;
		int inches;
	public:
		Distance(){
			feet=0;
			inches=0;
		}
		Distance(int ft,int in){
			feet=ft;
			if (in<=12)
			inches=in;
			else {
				feet+=in/12;
				inches=in%12;	
			}
		}
		void display(){
			cout<<"feets:inches= "<<feet<<":"<<inches<<endl;
		}
	};
int main(){
	Distance distance(34,13);
	distance.display();
}
