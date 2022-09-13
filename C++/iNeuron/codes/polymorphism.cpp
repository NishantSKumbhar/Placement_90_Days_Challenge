#include<iostream>

using namespace std;

void f1(){
	cout<<"This is f1."<<endl;
}

void f1(int n){
	cout<<"This is f1 with 1 argument as "<<n<<endl;
}

// void f1(float n){
//  	cout<<"This is f1 with 1 argument as "<<n<<endl;
//  }
void f1(double n){
 	cout<<"This is f1 with 1 argument as "<<n<<endl;
 }
int main(){

	f1();
	f1(2);
	f1(5.5);
	return 0;
}
