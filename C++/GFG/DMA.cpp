#include<iostream>

using namespace std;

int main(){
	int *p = new int[10];
	*(p+0) = 10;
	*(p+0) = 20;
	*(p+0) = 30;
	*(p+0) = 40;
	*(p+0) = 50;
	*(p+0) = 60;
	*(p+0) = 70;
	*(p+0) = 80;
	*(p+0) = 90;
	*(p+0) = 100;

	cout<<*(p+2)<<endl;

	delete []p;
	return 0;
}