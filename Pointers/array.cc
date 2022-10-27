#include<iostream>

using namespace std;

void print(char * n){
	while(*n){
		cout << *n ;
		n++;
	}

}


int add(int n1, int n2){
	int ans = n1 + n2;
	return ans;

}

void printName(){
	cout << "Hello" << endl;
}

void display_pointer(int *p){
	cout << *p << endl;
	*p = 23;
}
int main(){
	int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	for(int i = 0; i < 10; i++){
		cout << a[i] << endl;
	}

	cout << "*************************" << endl;

	for(int i = 0; i < 10; i++){
		cout << *(a+i) << endl;
	}

	cout << "*************************" << endl;

	int *p = a;
	for(int i = 0; i < 10; i++){
		cout << *(a+i) << endl;
	}
	cout << "*************************" << endl;

	char n[10] = "Hello";
	print(n);
	cout << "*************************" << endl;

	int ar[3][2] = {{11, 22}, {111, 222}, {1111, 2222}};
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			cout << ar[i][j] << " ";
		}
		cout << endl;
	}
	cout << "*************************" << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			cout << *(ar[i] + j) << " ";
		}
		cout << endl;
	}
	cout << "*************************" << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			cout << *(*(ar +i) + j) << " ";
		}
		cout << endl;
	}
	cout << "*************************" << endl;

	for (int i = 0; i < 6; ++i)
	{
		cout << *(ar + i) << " ";
	}
	cout << "*************************" << endl;
	int (*t)[2] = ar;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			cout << *(*(t +i) + j) << " ";
		}
		cout << endl;
	}
	cout << "*************************" << endl;

	int arr[3][2][2] = {
						{{11, 22},{33, 44}},
						{{111, 222},{333, 444}},
						{{1111, 2222},{3333, 4444}}
					};

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			for(int k = 0; k < 2; k++){
				cout << arr[i][j][k] << "  ";
			}
			cout <<  " ,";
		}
		cout << endl;
	}

	cout << "*************************" << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			for(int k = 0; k < 2; k++){
				cout << *(arr[i][j] + k) << "  ";
			}
			cout <<  " ,";
		}
		cout << endl;
	}
	cout << "*************************" << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			for(int k = 0; k < 2; k++){
				cout << *( *(arr[i] + j) + k) << "  ";
			}
			cout <<  " ,";
		}
		cout << endl;
	}
	cout << "*************************" << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			for(int k = 0; k < 2; k++){
				cout << *( *(*(arr + i) + j) + k) << "  ";
			}
			cout <<  " ,";
		}
		cout << endl;
	}
	cout << "*************************" << endl;
	int (*t3)[2][2] = arr;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			for(int k = 0; k < 2; k++){
				cout << *( *(*(t3  + i) + j) + k) << "  ";
			}
			cout <<  " ,";
		}
		cout << endl;
	}

	int (*fp)(int, int) = add;
	int c = (*fp)(1, 2);
	cout << c << endl;

	void (*y)() = printName;
	y();

	cout << "***************************************" << endl;
	cout << "SPECIAL CASE" << endl;
	int o = 12;
	
	
	int *u = &o;
	display_pointer(u);
	display_pointer(u);


	int btr[5] = {1, 2, 3, 4, 5};
	int *pvr = (int *)(&btr + 1) - 1;  // pointer to last element of array
	cout << *pvr  << endl;
	cout << *(pvr -1)  << endl;
	return 0;
}