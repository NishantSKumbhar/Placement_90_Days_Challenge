#include<iostream>

using namespace std;

int raise_to(int base, int power){
	int r=1;
	while(power--){
		r = r*base;
	}
	return r;
}

int main(){

	int b,p;
	cout<<"Enter the Base : "<<endl;
	cin>>b;
	cout<<"Enter the Power : "<<endl;
	cin>>p;

	int result = raise_to(b, p);
	cout<<b<<" Base to the Power "<<p<<" is "<<result<<endl;
	return 0;
}