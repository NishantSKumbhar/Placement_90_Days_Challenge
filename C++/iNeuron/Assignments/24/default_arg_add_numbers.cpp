#include<iostream>

using namespace std;

int add(int , int , int = 1);
int add(int x, int y, int z){
    return x+y+z;
}

int main(){

    int a = add(2,3);
    cout<<"Addition is "<<a<<endl;
    a = add(2,3,7);
    cout<<"Addition is "<<a<<endl;
    return 0;
}
