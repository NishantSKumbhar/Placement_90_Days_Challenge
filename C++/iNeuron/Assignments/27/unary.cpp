#include<iostream>

using namespace std;

class Unary{
	int n;
public:
	Unary(int x){
		n = x;
	}

	void operator++(){
		++n;
	}

	void operator--(){
		--n;
	}

	void show(){
		cout << n << endl;
	}
};

int main(){
	
	Unary u1(2);
	u1.show();
	++u1;
	u1.show();
	--u1;
	u1.show();

	return 0;
}