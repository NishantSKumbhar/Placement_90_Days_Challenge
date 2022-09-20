#include<iostream>

using namespace std;

class Complex{
	int real, img;
public:
	Complex(int a = 0 , int b = 0): real(a), img(b){
	}

	Complex operator+(Complex obj){
		Complex temp;
		temp.real = real + obj.real;
		temp.img = img + obj.img;
		return temp;
	}

	void display(){
		cout<<real<<" + "<<img<<" i"<<endl;
	}
};


int main(){
	
	Complex c1(1,2),c2(4,6);
	c1.display();
	c2.display();
	Complex c3 = c1 + c2;
	cout<<"-------"<<endl;
	c3.display();
	cout<<"-------"<<endl;
	c1 = c2;
	c1.display();
	c2.display();

	return 0;
}