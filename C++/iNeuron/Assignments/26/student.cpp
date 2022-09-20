#include<iostream>

using namespace std;

class Student{
	string name,city;
	char div;
	long long int mobile;
	
public:
	
	Student(string n, string c,	char d, long long int m){
		name = n;
		city = c;
		div = d;
		mobile = m;
	}

	void DisplayStudent(){
		cout<<"STUDENT DETAIL ---->"<<endl;
		cout<<"Name      : "<<name<<endl;
		cout<<"Mobile No : "<<mobile<<endl;
		cout<<"City      : "<<city<<endl;
		cout<<"Division  : "<<div<<endl;

	}

};



int main(){
	Student s1("Shubham", "Kolhapur", 'B', 9023783478);
	s1.DisplayStudent();
	
	return 0;
}