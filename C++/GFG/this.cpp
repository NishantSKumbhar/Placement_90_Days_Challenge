#include<iostream>

using namespace std;

class Test{
	int x;
	int y;
public:

	Test(int x1, int y1){
		// x = x1;
		// y = y1;
		this->x = x1;
		this->y = y1;
	}


	Test & setX(int a){
		this->x = a;
		return *this;	
	}
	Test & setY(int b){
		this->y = b;
		return *this;	
	}


	void show(){
		cout<<"x : "<<x<<" and y : "<<y<<endl;
	}

};

int main(){

	Test t1(12,23);
	t1.show();
	t1.setX(100).setY(200);
	t1.show();
	return 0;
}