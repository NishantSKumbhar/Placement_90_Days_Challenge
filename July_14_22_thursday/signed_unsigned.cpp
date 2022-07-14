#include<iostream>

using namespace std;


int main(){
	unsigned int x = -1;
	int y = x;
	cout<<"Unsigned x : "<<x<<endl;
	cout<<"y : "<<y<<endl;

	return 0;
}

/*
Output :
Unsigned x : 4294967295
y : -1

because -1 is converted into 32 bit binary and then convert to 2s compliment and then again convert into decimal. which is 429.....

*/
