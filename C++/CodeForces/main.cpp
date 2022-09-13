#include <bits/stdc++.h>

using namespace std;

// void solve(int* r, int* m, int n){
	
// 	for(i = 0; i < n; i++){
		
// 	}
		
// }

class Test{
	int t;
public:
	Test(){
		cout<<"Default Constructor of Test"<<endl;
	}

	Test(int x){
		cout<<"Parameterized Constrctor of Test"<<endl;
		t = x;
	}
};

class Main{
	Test t;
public:
	Main():t(10){
		//t = Test(10);
	}

};

int main(){
	// int roll[] = {101, 108, 103, 105};
	// int marks[] = {70, 80, 40, 90};

	// solve(roll, marks, 4);

	Main m1;
	
	return 0;
}