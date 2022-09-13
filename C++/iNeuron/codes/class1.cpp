#include<iostream>

using namespace std;


class Mobile{
private:
	int schema = 0;
	int salary = 0;
public :

	Mobile(){
		cout<<"This is Default Constructor"<<endl;
	}

	Mobile(int a){
		cout<<"This is Parametarized Constructor"<<endl;
	}

	void set_data(int a, int b){
		if(a < 0 || b < 0){
			cout<<"Please Enter Positive Values"<<endl;
		}else{
		
			schema = a;
			salary = b;
		}
	}

	void show(){
		cout<<"Salary : "<<salary<<" and Schema : "<<schema<<endl;
	}


};

int main(){
	cout<<"Hello"<<endl;
	Mobile m1;
	m1.set_data(8, 50000);
	m1.show();
	Mobile m2(2);
	return 0;
}