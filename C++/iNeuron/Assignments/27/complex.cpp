#include<iostream>

using namespace std;

class Complex{

	int real,img;
public:
	Complex(int a, int b){
		real = a;
		img = b;
	}

	Complex operator+(Complex obj){
		Complex newObj(0,0);
		newObj.real = real + obj.real;
		newObj.img = img + obj.img;
		return newObj;
	}

	Complex operator-(Complex obj){
		Complex newObj(0,0);
		newObj.real = real - obj.real;
		newObj.img = img - obj.img;
		return newObj;
	}
	
	Complex operator*(Complex obj){
		Complex newObj(0,0);
		newObj.real = ((obj.real * real) - (obj.img * img));
		newObj.img = ((obj.real * img) + (obj.img * real));
		return newObj;
	}

	int operator==(Complex obj){
		if(obj.real == real && obj.img == img){
			return 1;
		}
		return 0;
	}
	void show(){
		cout << real << " + " << img << " i"<<endl;
	}

};


int main(){
	Complex c1(1,3), c2(1,3);
	c1.show();
	c2.show();
	Complex c3 = c1 + c2;
	c3.show();

	Complex c4 = c1 * c2;
	c4.show();

	if(c1 == c2){
		cout << " c1 and c2 are equal." << endl;
	}else{
		cout << " Not equal"<<endl;
	}
	return 0;
}	