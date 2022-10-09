#include<iostream>

using namespace std;

class Mobile{

	int price, ram, rom;
	string name, color;

public:

	Mobile(int price, int ram, int rom, string name, string color){
		this->price = price;
		this->ram = ram;
		this->rom = rom;
		this->name = name;
		this->color = color;
	}

	void show(){
		cout << "Data about Mobile" << endl;
	}

};


class iphone: public Mobile{

};


class samsung: public Mobile{


};

int main(){
	

	return 0;
}