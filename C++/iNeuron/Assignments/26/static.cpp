#include<iostream>

using namespace std;

class StaticCount{
	static int c;
public:
	void fun(){
		c++;
	}

	static void DisplayCount(){
		cout<<"Increment : "<<c<<endl;
	}
	

};

int StaticCount :: c = 0;

int main(){

	StaticCount s1;
	s1.fun();
	s1.fun();
	s1.fun();
	StaticCount::DisplayCount();
	
	return 0;
}