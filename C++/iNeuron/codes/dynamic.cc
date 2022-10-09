#include<iostream>

using namespace std;

int main(){
	
	int *p = new int;


	int *ptr = new int[5];

	ptr[0] = 23;
	ptr[1] = 10;


	for(int i = 0; i < 5; i++){
		cout << ptr[i] << endl;
	}

	// Complex *c = new Complex;
	// Complex *c = new Complex();

	delete p;
	//delete c;
	delete []ptr;
	return 0;
}