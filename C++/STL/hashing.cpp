#include<iostream>
#include <unordered_set>
using namespace std;

int main(){
	
	unordered_set<int> d;

	d.insert(23);
	d.insert(34);
	d.insert(23);
	d.insert(3);
	d.insert(23);
	d.insert(232);


	if(d.find(23) == d.end()){
		cout << "Not Found" << endl;
	}else{
		cout << "Found" << endl;
	}

	d.erase(3);

	
	
	for(auto a = d.begin(); a != d.end(); a++){
		cout << *a << endl;
	}

	cout << "Count : " <<  d.count(23) << endl;

	cout << d.size() << endl;


	d.clear();

	cout << d.size() << endl;



	return 0;
}