#include <iostream>
using namespace std;
class Shape {
	protected:
		double side1;
		double side2;
	public:
		Shape(){
			side1=1;
			side2=1;
		}
		Shape(double s1,double s2): side1(s1),side2(s2){
	
		}
		void getdata(double s1,double s2){
			side1=s1;
			side2=s2;
		}
		void display_area(char d){
			double area;
			if (d=='r'){
			 area=side1*side2;
			  cout<<"Area of rectangle ="<<area<<endl;
			}
			if (d=='t'){
			 area=side1*side2;	
			 cout<<"Area of tringle ="<<area<<endl;
			}
		}
	
};
class Tringle : public Shape{
	public:
		Tringle(){
			
		}
		Tringle(double s,double s1):Shape(s,s1){
			display_area('t');
		}
};
class Rectangle : public Shape{
	public:
		Rectangle(){
			
		}
		Rectangle(double h,double w):Shape(h,w){
		display_area('r');	
		}

};
int main(){
	Shape s;
	Rectangle r;
	r.getdata(4,2);
	r.display_area('r');
	Rectangle r2(3,4);
	Tringle t(4,3);	
}
