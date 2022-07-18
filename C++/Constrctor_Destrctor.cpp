#include <bits/stdc++.h>

using namespace std;


class Mobile{
public:

	Mobile(){
		cout<<"Default Constructor"<<endl;
	}

	Mobile(int x){
		cout<<"Parameterized Constrctor"<<endl;
	}

	~Mobile(){
		cout<<"Destructor"<<endl;
	}
};


int main(){
	Mobile m1;
	cout<<"OK"<<endl;
	Mobile m2(7);

	return 0;
}