#include<iostream>

using namespace std;

class Communication{
	
public:
	int code;
	Communication(int code){
		this->code = code;
	}

};

class Mobile:public Communication{
public:
	string name;
	Mobile(string name, int c):Communication(c){
		this->name = name;
	}

	void print_data(){
		cout << "Code : " << code << endl;
		cout << "Name : " << name << endl;
	}


};

int main(){
	Mobile m1("Jasd", 3);
	m1.print_data();

}