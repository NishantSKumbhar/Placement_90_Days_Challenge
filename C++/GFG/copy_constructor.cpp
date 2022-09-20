#include<iostream>

using namespace std;


class Test{
	int *p;
public:
	Test(int x){
		p = new int(x);
	}

	// Own Copy Constructor
	Test(const Test &t){
		int val = *(t.p);
		p = new int(val);
	}

	void setP(int x){
		*p = x;
	}

	void printP(){
		cout<<*p<<endl;
	}


};

int main(){
	
	Test t1(3);
	Test t2(t1);
	t2.setP(5);
	t1.printP();
	t2.printP();


	return 0;
}