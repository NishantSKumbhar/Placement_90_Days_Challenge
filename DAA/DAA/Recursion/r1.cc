#include<iostream>

using namespace std;

void solve(int n){
	if(n == 0){
		return;
	}

	solve(n-1);
	cout << n << endl;
	solve(n-1);
	
}

int r1(int n){
	if(n == 1)
		return 0;
	
	int a = 1 + r1(n/2);
	cout << a << endl;
	return a;	

}

// Binary Conversion
void r2(int n){
	if(n == 0){
		return;
	}
	cout << n % 2 << " ";
	r2(n/2);
	
}

void r3(int n){
	if(n < 1){
		return;
	}

	cout << n << endl;
	r3(n-1);
}

void fib(int n1, int n2, int k){
	if (k < 1){
		return;
	}
	int a = n1 + n2;
	cout << a << " ";
	
	fib(n2, a, k-1);
}

int main(){
	
	// solve(5);

	// int a = r1(16);	
	// cout << "Ans : " << a << endl;
	// r2(13);
	// r3(10);
	//					n1  n2 a
	// Fibonacci series  0  1  1  2  3  5  8  13
	cout << 0 << " " << 1 << " ";
	fib(0, 1, 5);
	return 0;
}