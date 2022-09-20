#include<iostream>

using namespace std;


class Human{
	string specie = "Xn13P";
protected:
	int count;
	int id;
public:
	string planet = "Earth";
	Human(int c){
		cout<<"Base class Constructor : "<<c<<endl;
	}
	void setData(int c, int i){
		count = c;
		id = i;
	}

	void display(){
		cout<<specie<<endl;
		cout<<count<<endl;
		cout<<id<<endl;
		cout<<planet<<endl;
	}

};

class Man : public Human{
public:
	int x = 12;
	Man(int c) : Human(c){
		cout<<"Derived class Constructor"<<endl;
	}

	void show(){
		cout<<x<<endl;
		cout<<count<<endl;
		cout<<id<<endl;
	}
};

int main(){
	
	Human h1(5);
	h1.setData(100, 12);
	h1.display();

	Man m1(101);
	m1.show();
	return 0;
}