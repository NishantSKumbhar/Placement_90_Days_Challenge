#include<iostream>

using namespace std;

class Demo{
	int a;
public:
	static int count;
	Demo(){
		cout << "Constructor is Called" << endl;
		count++;
	}

	static int getCount(){
		return count;
	}
	~Demo(){
		cout << "Destructor is Called" << endl;
		count--;
	}

};

int Demo::count = 0;

class DerivedDemo:public Demo{
public:
	DerivedDemo(){
		cout << "D Constructor " << endl;
	}

	~DerivedDemo(){
		cout << "D Destructor " << endl;
	}
};

int main(){

	Demo d1;
	cout << "Count  : " << Demo::count << endl;
	Demo d2;
	cout << "Count  : " << Demo::count << endl;
	Demo d3;
	cout << "Count  : " << Demo::count << endl;
	int c = Demo::getCount();
	cout << "C : " << c << endl;

	DerivedDemo dr1;

	return 0;
}