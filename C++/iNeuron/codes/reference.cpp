// initialize is complasory at the time.
#include <iostream>

using namespace std;

void swap(int & , int &);

int main(){

	int x = 10;
	int &y = x;
	cout <<y<<endl;
	y++;
	cout <<y<< endl;
	cout <<x<< endl;

	int n1 = 10, n2= 12;
	

	cout<<"Before Swap : "<<endl;
	cout<<n1<<" | "<<n2<<endl;
	swap(n1,n2);
	cout<<n1<<" | "<<n2<<endl;



	return 0;
}

void swap(int &i1, int &i2){

	int t = i1;
	i1 = i2;
	i2 = t;
}