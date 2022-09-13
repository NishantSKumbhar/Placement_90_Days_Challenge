#include <iostream>
#include<limits.h>
using namespace std;

int highest_digit(int n){
	int max = INT_MIN;
	while(n){
		int d = n % 10;
		if(d > max){
			max = d;
		}
		n /= 10;
	}
	return max;
}

int main(){

	int n;
	cout<<"Enter the Number : "<<endl;
	cin>>n;

	int hDigit = highest_digit(n);
	cout<<"Maximum Digit From "<<n<<" is "<<hDigit<<endl;
	return 0;
}