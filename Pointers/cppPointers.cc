#include<iostream>

using namespace std;

int main(){

    cout << "\t\t\tC++" << endl;
	cout << "__________________________________________________" << endl;
	cout << "******************** POINTERS ********************" << endl;
	cout << "__________________________________________________" << endl;

    int a = 10;

    cout << "a : " << a << endl;


	printf("\na : %d",a);
	printf("\n&a : %d",&a);
	int *p = &a;
	printf("\n*p : %d",*p);
	printf("\np : %d",p);
	printf("\n&p : %d",&p);

	return 0;
}
