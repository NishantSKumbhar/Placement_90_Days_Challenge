#include<iostream>

using namespace std;

class A{
public:

	void funAPublic(){
		cout << "funAPublic of A Called" << endl;
	}
protected:
	void funAProtected(){
		cout << "funAProtected of A Called" << endl;
	}
private:
	void funAPrivate(){
		cout << "funAPrivate of A Called" << endl;
	}
};


class B: public A{
	// functions that are accessible with B from A
	// public:public (accessible)
	// protected: protected (accessible)
	// private : private (accessible)

	// outside B
	// both public functions are accessible
	// both private and protected are not accessible.

public:

	void funBPublic(){
		cout << "funBPublic of B Called" << endl;
		funAProtected();
		// funAPrivate()
	}
protected:
	void funBProtected(){
		cout << "funBProtected of B Called" << endl;
	}
private:
	void funBPrivate(){
		cout << "funBPrivate of B Called" << endl;
	}
};


class C: protected A{
	// functions that are accessible with C from A
	// public:public (accessible)
	// protected: protected (accessible)
	// private : private (accessible)

	// outside C
	// only this class public functions are accessible.
	// inherited class public function is now protected.
	// both private and protected are not accessible.

public:

	void funCPublic(){
		cout << "funBPublic of C Called" << endl;
		funAProtected();
		funAPublic();
		// funAPrivate()
	}
protected:
	void funCProtected(){
		cout << "funBProtected of C Called" << endl;
	}
private:
	void funCPrivate(){
		cout << "funBPrivate of C Called" << endl;
	}
};



class D: private C{
	

public:

	void funDPublic(){
		cout << "funDPublic of D Called" << endl;
		funAPublic();
	
		funAProtected();
		// funAPrivate()
	}
protected:
	void funDProtected(){
		cout << "funDProtected of D Called" << endl;
	}
private:
	void funDPrivate(){
		cout << "funDPrivate of D Called" << endl;
	}
};




int main(){
	A a1;
	a1.funAPublic();
	// a1.funAProtected();
	// a1.funAPrivate();
	
	B b1;
	b1.funBPublic();
	b1.funAPublic();
	

	C c1;
	//c1.funAPublic();
	c1.funCPublic();
	
	D d1;
	d1.funDPublic();
	//d1.funAPublic();
	return 0;
}