#include <iostream>
using namespace std;
class rectangle {
public :
	int side1;
	int side2;
	rectangle() {
		side1 = 0;
		side2 = 0;
	}
	rectangle(int s1, int s2) {
		side1 = s1;
		side2 = s2;
	}
	void  area() {
		int ra=side1*side2;
		cout <<ra;
		
		}
	void getdefarea(){
		cout <<"area of the default rectangle is =";
		area();
		cout <<endl;
	}
	void getrecarea(){
		cout <<"area of the undefault rectangle is =";
		area();
	}
};

int main()
{
	int x, y;
	cout << "enter one side :";
	cin >> x;
	cout << "enter second side :";
	cin >> y;
	rectangle r1;
	r1.getdefarea();
	rectangle r2(x, y);
	r2.getrecarea();
}

