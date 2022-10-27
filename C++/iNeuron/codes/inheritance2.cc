#include<iostream>

using namespace std;


class Base{
public:
	Base(){
		cout << "Base class Constructor" << endl;
	}

	virtual void basefun(){
		cout << "Base class Function" << endl;
	}

};

class Derived : public Base{
public:
	Derived(){
		cout << "Derived class Constructor" << endl;
	}
	void basefun(){
		cout << "Modified Base class Function" << endl;
	}
	void derivedfun(){
		cout << "Derived class Function" << endl;
	}

};
int main(){
	
	Base *b;
	Derived *d;

	Base obj1;
	Derived obj2;

	b = &obj1;
	b->basefun();
	// b->derivedfun();

	d = &obj2;
	d->basefun();
	d->derivedfun();

	b = &obj2;
	b->basefun();
	// b->derivedfun();
	
	// d = &obj1;

	return 0;
}