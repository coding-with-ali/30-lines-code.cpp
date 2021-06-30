#include <iostream>
using namespace std;
int greatest(int x,int y){
	if (x>y)
	return x;
	else 
	return y;
}

string greatest(string x,string y){
	if (x>y)
	return x;
	else 
	return y;
}

int  findgreat(int x,int y,int z){
	int great=(x,y);
	int greatest=(great,z);
	return greatest;
}

string findgreat(string x,string y,string z){
	string great=(x,y);
	string greatest=(great,z);
	return greatest;
}

int main (){
	int x,y,z;
	string s1,s2,s3;
	cout<<"enter any three integers:";
	cin>>x>>y>>z;
	cout<<"enterr any three strings:";
	cin>>s1>>s2>>s3;
	
	cout<<"the greatest int="<<findgreat(x,y,z)<<endl;
	cout<<"the greatest string="<<findgreat(s1,s2,s3);
}
