#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
	vector<int> v1;
	for(int i = 0; i < 10; i++){
		v1.push_back(i*10/3 + 34 - 6*i + 100);
	}

	// int s = v1.size();

	for(int i = 0; i < v1.size(); i++){
		cout << i << " : " << v1[i] << endl;
	}

	cout <<"Size : " << v1.size() << "  Capacity : " << v1.capacity() << endl;
	v1.resize(8);
	cout <<"Size : " << v1.size() << "Capacity : " << v1.capacity() << endl;
	for(int i = 0; i < v1.size(); i++){
		cout << i << " : " <<  v1[i] << endl;
	}

	if(v1.empty()){
		cout << "Empty" << endl;
	}else{
		cout << "Not Empty" <<endl;
	}

	cout << "Another way to display using iterator" << endl;

	vector<int>:: iterator itr;
	for(itr = v1.begin(); itr != v1.end(); itr++){
		cout << (*itr) << endl;
	}

	vector<int> v2 = {1, 2, 3, 4};
	v2.swap(v1);
	cout << "V1 : " ;
	for(itr = v1.begin(); itr != v1.end(); itr++){
		cout << (*itr) << " ,";
	}
	cout << "\nV2 : " ;
	for(itr = v2.begin(); itr != v2.end(); itr++){
		cout << (*itr) << " ,";
	}
	return 0;
}