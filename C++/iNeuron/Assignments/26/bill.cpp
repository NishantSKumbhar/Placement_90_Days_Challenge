#include<iostream>

using namespace std;

class Bill{
	string name;
	long long mobile;
	int units;
public:
	void get(string n, long long m, int u){
		name = n;
		mobile = m;
		units = u;
	}

	float calculateBill(){
		if(units < 100){
			return 1.20*units;
		}else if(units >= 100  && units < 200){
			return 2*units;
		}else{
			return 3*units;
		}
	}

};

int main(){

	Bill b1;
	b1.get("Shubham", 1223344556, 123);
	float bill = b1.calculateBill();
	cout<<"Bill : "<<bill<<endl;
	
	
	return 0;
}