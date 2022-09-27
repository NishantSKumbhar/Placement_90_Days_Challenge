#include<iostream>

using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b;
	try{
		if(b == 0){
			throw "Divide by Zero Error";
		}

		if(b == 1){
			throw b;
		}
		c = a / b;
		
	}
	catch(const char * err_msg){
		cout<< err_msg << endl;
	}
	catch(int msg){
		cout<< "Integer that can not be passed is " << msg << endl;
	}
	catch(...){
		cout << "Default " << endl;
	}

	cout << "Result : " << c << endl;
	return 0;
}