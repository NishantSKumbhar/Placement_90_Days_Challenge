#include<bits/stdc++.h>
using namespace std;


void print(vector<int> &v){
	for(const auto x: v){
		cout<<x<<endl;
	}
}

int &fun(){
	static int x = 10;
	return x;
}

class Mobile{
	int price;
	string name;
public:
	Mobile(){
		price = 0;
		name = "------";
		cout<<"Default Constructor"<<endl;
	}

	Mobile(int p, string n){
		price = p;
		name = n;
		cout<<"Parameterized Constrctor"<<endl; 
	}

	void show_data(){
		cout<<"Name : "<<name<<endl;
		cout<<"Price : "<<price<<endl;
	}
};

int main(){
	// int x = 12;
	// int y = 20;
	// int &&v = x+y;

	// Mobile m1, m2(20000, "Note 10 Pro");
	// m1.show_data();
	// m2.show_data();
	vector<int> n;

	if(n[0]){
		cout<<"Yes";
	}else{
		cout<<"NO";
	}

	


}