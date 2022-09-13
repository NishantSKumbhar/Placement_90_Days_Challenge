#include <iostream>

using namespace std;

inline int add(int , int);

// loop, switch, static, recursion, goto

int main(){

	cout<<"Jay Ganesh"<<endl;
	int a = add(2,6);
	cout<<"result : "<<a<<endl;
	return 0;
}


int add(int x, int y){
	return x+y;
}