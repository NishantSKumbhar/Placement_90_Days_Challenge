#include<iostream>

using namespace std;

class Dollar{
	float d;
public:

	Dollar(){
		cout << "Default Constructor of Dollar." << endl;
	}

	Dollar(float y){
		cout << "Parameterized Constrctor of Dollar." << endl;
		d = y;
	}

	operator float(){
		cout << "float of Dollar Called." << endl;
		return d;
	}

	void display(){
		cout << d << endl;
	}

};


class Rupee{
	float r;

public:
	Rupee(){
		cout << "Default Constructor of Rupee." << endl;
	}

	Rupee(float x){
		cout << "Parameterized Constrctor of Rupee." << endl;
		r = x;
	}

	Rupee(Dollar d){
		cout << "Parameterized Constrctor of Rupee." << endl;
		r = d*98;
	}

	operator float(){
		cout << "float of Rupee Called ." << endl;
		return r;
	}

	void display(){
		cout << "Rupee : " << r << endl;
	}
};



int main(){
	float x = 1000;
	Rupee r = x;
	r.display();		
	float y;
	
	// Rupee --> float
	// so, in class of Rupee, so it return value of r;
	y = (float)r; // explicitly say to compiler.
	//y = r    // implicit, compiler automatically do.
	cout << y;

	float k = 1200;
	Dollar d1 = k;
	d1.display();

	float q;
	q = d1;
	cout << q << endl;

	//r = (Rupee)d1
	r = d1;
	r.display();
	return 0;

}