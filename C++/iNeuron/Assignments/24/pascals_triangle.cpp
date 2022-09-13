#include<iostream>

using namespace std;

void print_pascals_triangle(int n){
	int r,c;
	int val = 1;
	for(r = 1; r <= n; r++){
		int val = 1;
		for(c = n-r; c >= 0; c--){
			cout<<"   ";
		}
		for(c = 1; c <= r; c++){
			cout<<" * ";



			cout<<"   ";
		}
		cout<<endl;
	}
}

int main(){
	int l = 8;
	// cout<<"Enter the Number of Line for Pascal's Triangle : ";
	// cin>>l;

	print_pascals_triangle(l);

	return 0;
}