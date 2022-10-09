#include<iostream>

using namespace std;

class Mobile{

	int a;int b;
public:

	Mobile(int a, int b){
		this->a = a;
		this->b = b;
	}

	void show_data(){
		cout << "a : " << a << endl;
		cout << "b : " << b << endl;
	}

	Mobile sumGreater(Mobile m){
		if((this->a + this->b) > (m.a + m.b)){
			return *this;
		}
		return m;
	}

};

int main(){
	Mobile m1(2, 3);
	m1.show_data();
	Mobile m2(2, 1);
	m2.show_data();

	Mobile m3 = m1.sumGreater(m2);
	m3.show_data();
	return 0;
}