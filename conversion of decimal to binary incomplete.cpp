#include <iostream>
using namespace std;
class conversion{
	private:
		int binary;
		int decimal;
	public:
			void positive ();
			void negative ();
		void set(int n){
			decimal=n;
			binary=0;
		}
		if (decimal>0){
			positive();
		}
		else 
			negative();
		void positive (){
			int r=0;
			while (decimal){
			    r=decimal%2;
				cout<<r;
				decimal=decimal/2;
				if (decimal<0){
					decimal=0;
				}
			}
		}
		void negative (){
			int r=0;
			while (decimal){
			    r=decimal%2;
				cout<<r;
				decimal=decimal/2;
			}
		}
};
int main (){
	conversion c;
	c.set(19);
}
