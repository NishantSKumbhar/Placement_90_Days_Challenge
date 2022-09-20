#include<iostream>

using namespace std;

class Counter{
	static int c;
public:
	Counter(){
		c++;
	}

	static void DisplayCounter(){
		cout<<"Counter : "<<c<<endl;
	}

	//static void 

};

int Counter :: c = 0;

int main(){
	Counter c1,c2,c3,c4,c5;
	Counter::DisplayCounter();
	return 0;
}