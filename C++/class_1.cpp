#include <bits/stdc++.h>

using namespace std;

class Mobile{

// Access Specifier
public:

	// Data Members
	string name = "XYZ";
	int price = 0;
	string color = "UVW";



	// Default Constructor
	Mobile(){
		color = "Product Red";
		cout<<"Default Constructor."<<endl;
		cout<<"Color of Mobile : "<<color<<endl;
		cout<<"name : "<<name<<" and Price : "<<price<<endl;
	}

	// Parameterized Constrctor
	Mobile(int x){
		price = x;
		cout<<"Parameterized Constrctor "<<endl;
		cout<<"Price : "<<price<<endl;
	}

	// Inside Member Function
	void print_name(){
		cout<<"Mobile Name is "<<name<<endl;
	}

	// Outside class Defination Member Function
	void print_price();

};

void Mobile :: print_price(){
	cout<<"Data Members can be accecible : name : "<<name<<" and Price : "<<price<<endl;

}

int main(){
	Mobile m1;
	m1.name = "Note 10 Pro";
	m1.print_name();
	m1.price = 20000; 
	m1.print_price();

	Mobile m2(1999.9);

	cout << "******************" << endl;
	// int *p = &x;
	Mobile *m3 = new Mobile;
	m3->color = "BROWN";
	cout << "m3:Color --> " << m3->color << endl;
	m3->print_price();

	
	delete(m3);
	
	cout << m3->color ;
	return 0;
}