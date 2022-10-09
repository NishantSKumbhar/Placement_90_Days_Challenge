#include<iostream>
#include <fstream>
using namespace std;

/*

read : ifstream
write : ofstream
ios---> read/write/r w / append / delete  : modes

ios::in   --> read
ios::out  --> write
ios::trunc --> delete and write
ios::app   ---> append
ios::ate   --> at end
ios::out|ios::in|ios::app   how to open in multiple class
*/

int main(){
	
	ofstream any_name;
	//any_name.open("D:/Angular/abs.txt");
	any_name.open("Genesis.txt", ios::app | ios::in | ios::out);
	string name;
	if(!any_name){
		cout << "File not created or not able to open" << endl;

	}else{
		while(any_name){
			getline(cin, name);

			if(name == "-1"){
				break;
			}

			any_name << name;
		}
		any_name << "POW and POS" << endl;
		cout << "File created successfully" << endl;
	}

	any_name.close();


	ifstream fin;

	fin.open("Genesis.txt", ios::in);

	while(fin){
		getline(fin, name);
		cout << name << endl;
	}

	fin.close();
	return 0;
}