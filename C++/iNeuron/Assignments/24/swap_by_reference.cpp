#include<iostream>

using namespace std;

void swap_fun(int &num1, int &num2){
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

int main(){
	int a,b;
	cout<<"Enter the Two Values : ";
	cin>>a>>b;

	cout<<"Before Swap : "<<endl;
	cout<<"a : "<<a<<" |  b : "<<b<<endl;
	swap_fun(a,b);
	cout<<"After Swap : "<<endl;
	cout<<"a : "<<a<<" |  b : "<<b<<endl;
	return 0;
}