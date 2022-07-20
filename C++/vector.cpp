#include <bits/stdc++.h>
#include <vector>

using namespace std;


void display(vector<int> &v){
	for(int i = 0; i < v.size(); i++){
		cout<<"Element : "<<v[i]<<endl;
	}
}

int main(){


	// Initialize the Vector
	vector<int> v1;
	int element;
	int size;
	cout<<"Enter size : ";
	cin>>size;
	for(int i = 0; i < size; i++){
		cout<<"Enter number : ";
		cin>>element;
		v1.push_back(element);
	}

	display(v1);

	return 0;
}