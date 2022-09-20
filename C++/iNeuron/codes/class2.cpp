#include<iostream>

using namespace std;

class Mobile{
	int a = 0;
public:
	Mobile(){
		cout<<"Mobile Constructor"<<endl;
	}

	Mobile(int x){
		cout<<"Parameterized Constrctor : "<<x<<endl;
		a = x;
	}

	void operator++(int){
		cout << "Operator  post increment" <<endl;
		a++;
	}

	void operator++(){
		cout << "Operator pre increment" <<endl;
		++a;
	}

	void show(){
		cout << a << endl;
	}

};

int main(){
	
	Mobile m1,m2(2);
//	cout << m2.a <<endl;
	m2.show();
	++m2;
	m2.show();
	
	m2++;   // for post increment add dummy (int) in function call
	m2.show();

	return 0;

}