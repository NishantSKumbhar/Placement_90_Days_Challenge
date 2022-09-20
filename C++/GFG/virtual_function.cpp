#include<iostream>

using namespace std;


class Base{
public:
	virtual void display(){
		cout<<"Base Class Method"<<endl;
	}

};

class Derived : public Base{
public:
	void display () override {
		cout<<"Derived Class Method"<<endl;
	}
};

int main(){

	Base b1;
	Derived d1;
	b1.display();
	d1.display();
	Base *ptr = &d1;
	ptr->display();
	
	return 0;
}