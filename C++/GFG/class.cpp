#include<iostream>
#include<string>

using namespace std;

class Mobile{
	int price;
	string name;
	int stock;
	int *p;
public:

	Mobile(): price(0), name("--"), stock(0){
		cout<<"Default Constructor"<<endl;

	}

	Mobile(int p, string n, int s){
		price = p;
		name = n;
		stock = s;
	}

	void setX(int a){
		p = new int(a);
	}

	void showX(){
		cout<<"X : "<<*p<<endl;
	}
	void show(){
		cout<<"Name : "<<name<<endl;
		cout<<"Price : "<<price<<endl;
		cout<<"Stock : "<<stock<<endl;
	}

};

int main(){
	
	Mobile m1, m2(20000, "Note 10 Pro", 238), m3;
	cout<<"m1"<<endl;
	m1.show();
	cout<<"m2"<<endl;
	m2.show();
	cout<<"m3"<<endl;
	m3.show();
	Mobile *m4 = new Mobile;
	cout<<"m4"<<endl;
	m4->show();
	// copy Constructor

	Mobile m5(m2);
	cout<<"m5"<<endl;
	m5.show();

	Mobile m6 = m2;
	cout<<"m6"<<endl;
	m6.show();

	//Copy Constructor Disadvantage;
	Mobile m7(m2);
	m7.setX(6);
	m7.showX();
	m2.showX();
	return 0;
}