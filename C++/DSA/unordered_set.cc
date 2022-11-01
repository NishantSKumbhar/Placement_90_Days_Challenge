#include <iostream>
#include <unordered_set>
// insert, search, delete opertions are performed in o(1)

using namespace std;

int main(){

	unordered_set<int> s;
	s.insert(10);
	s.insert(34);
	s.insert(56);
	s.insert(10);

	for(auto i = s.begin(); i != s.end(); i++){
		cout << (*i) << " ,";
	}

	if(s.find(4) == s.end()){
		cout << "Not Found" << endl;
	}else{
		cout << "Found" << endl;
	}

	cout << "Size : " << s.size() << endl;

	s.erase(34);

	for(auto i = s.begin(); i != s.end(); i++){
		cout << (*i) << ", ";
	}

	cout <<  "Count : "<< s.count(56) << endl;
	s.clear();

	cout << "New Size : " << s.size() << endl;


	return 0;
}