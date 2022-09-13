#include<iostream>

using namespace std;

//int add(int , int,  int);
int add(int , int,  int=0);
//int add(int=0 , int,  int=0);
// int add(int x, int y, int z=0){
// 	return x+y+z;
// }
int main(){
	cout<<"Default Arguments"<<endl;

	int a = add(1,2);
	cout<<"result : "<<a<<endl;
	int b = add(1,2,3);
	cout<<"result : "<<b<<endl;
	return 0;
}

// int add(int x, int y, int z=0){
// 	return x+y+z;
// }

int add(int x, int y, int z){
	return x+y+z;
}