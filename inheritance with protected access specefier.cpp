#include <iostream>
using namespace std;
class shape {
	public :
		void setw(int w){
			width=w;
		}
		
		void seth(int h){
			height=h;
		}
		protected:
			int width;
			int height;
			
};
class rectangle : public shape{
	public:
		int getarea(){
			return (width*height);
		}
};
int main (){
	rectangle rect;
	rect.seth(4);
	rect.setw(4);
	cout<<"araa="<<rect.getarea();
}
