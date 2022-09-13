#include <iostream>

using namespace std;

int isPrime(int num){
	for(int i = 2; i < num/2; i++){
		if(num % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	cout<<"Enter the Number : "<<endl;
	cin>>n;
	if(isPrime(n)){
		cout<<"Yes , It is Prime !"<<endl;
	}else{
		cout<<"No, Not a Prime"<<endl;
	}

	return 0;
}