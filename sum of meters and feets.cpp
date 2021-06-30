#include <iostream>

using namespace std;
class DBri;
class DMet{
	int meter;
	int cent;
	public:
		void input();
		void display();
		friend void sum(DMet&,DBri);
		friend void sum(DBri&,DMet);
};
	void DMet::input(){
		cout<<"enter Meters::";
		cin>>meter;
		cout<<"enter centemeters::";
		cin>>cent;
	}
	void DMet::display(){
		cout<<"the distance in meter format is ::"<<meter<<":"<<cent<<endl;
	}
class DBri{
	int feet;
	int inches;
		public:
			void input();
			void display();
			friend void sum(DMet&,DBri);
			friend void sum(DBri&,DMet);
};
void DBri::input(){
	cout<<"enter feets:";
	cin>>feet;
	cout<<"enter inches:";
	cin>>inches;
}
void DBri::display(){
	cout<<"the distance in feets format is "<<feet<<":"<<inches<<endl;
}
void sum(DBri& db,DMet dm){
	float x=dm.meter*39.37;
	x+=dm.cent*0.3937;
	int y=x;
	db.feet+=y/12;
	db.inches+=y%12;
	db.feet+=db.inches/12;
	db.inches=db.inches%12;
}
void sum (DMet& dm,DBri db){
	float x=db.feet*30.48;
	x+=db.inches*2.54;
	int y=x;
	dm.meter+=y/100;
	dm.cent+=y%100;
	dm.meter+=dm.cent/100;
	dm.cent=dm.cent%100;
}
int main(){
	DMet d1;
	DBri d2;
	d1.input();
	d2.input();
	cout<<"1 for sum in metres and 2 for feets:";
	int a;
	cin>>a;
	if (a==1){
		sum(d1,d2);
		d1.display();
	}
	if (a==2){
		sum(d2,d1);
		d2.display();
	}
}
