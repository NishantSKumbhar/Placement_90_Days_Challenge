#include<iostream>

using namespace std;

class Complex{
	int a, b;
	
	public:
		void setData(int x, int y){
			a = x;
			b = y;
		}

		void showData(){
			cout<<a<<" + "<<b<<" i"<<endl;
		}

		Complex add(Complex obj){
			Complex newObj;
			newObj.a = a + obj.a;
			newObj.b = b + obj.b;
			return newObj;
		}
};


int main(){
	
	Complex c1, c2, c3;
	c1.setData(3,6);
	c1.showData();
	c2.setData(5,1);
	c2.showData();
	c3 = c1.add(c2);
	c3.showData();


	return 0;
}