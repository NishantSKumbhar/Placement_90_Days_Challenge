#include<bits/stdc++.h>
using namespace std;

void print_fibo(int n){
	int n1 = 0;
	int n2 = 1;
	if(n == 1){
		cout << n1;
	}else if(n == 2){
		cout << n1 << " " << n2;
	}else{
		cout << n1 << " " << n2 << " ";
		n -= 2;
		while(n--){

			int ans = n1+n2;
			cout << ans << " ";
			n1 = n2;
			n2 = ans;
		}
	}
}

void print_fibo_rec(int n, int n1, int n2){
	if(n < 1){
		return;
	}

	n--;
	cout << n1 + n2 << " ";
	print_fibo_rec(n, n2, n1+n2);

}

int get_fib_rec(int n, int n1, int n2){
	
	if(n < 1){
		return n1+n2;
	}

	n--;
	return get_fib_rec(n, n2, n1+n2);
}

void bubble(float brr[], int n){
	for(int i = 0; i < n; i++){
		cout << brr[i] << " ";
	}
	cout<<endl;
	for(int j = 0; j < n; j++){
		for(int i = 0; i < n-1; i++){
		
			if(brr[i] > brr[i+1]){
			int temp = brr[i];
			brr[i] = brr[i+1];
			brr[i+1] = temp;
		
			}
			
		}	
	}
	

	for(int i = 0; i < n; i++){
		cout << brr[i] << " ";
	}

}
int main(){

	// int n;
	// cin >> n;
	// cout << "0 1 ";
	// print_fibo_rec(n-2, 0, 1);
	// cout<<endl;
	// int j = 6;
	// int b = get_fib_rec(j-2, 0, 1);
	// cout << "6 th : " << b << endl;

	float arr[] = {5, 1.66667, 3, 1 ,6, 4.5, 3};
	bubble(arr, sizeof(arr)/sizeof(arr[0]));
	return 0;

}
