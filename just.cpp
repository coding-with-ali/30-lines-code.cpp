#include <iostream>
using namespace std;
class student {
	private:
		int count;
		int roll;
	public:
		student():count(0),roll(1)
		{
		}
		int getcount (){
			return count and roll ;
		}
		void operator++(){
			count++;
		}
};
int main (){
	student s1,s2;
	cout<<	s1.getcount();
	++s1;
	cout<<s1.getcount();
}
