#include<iostream>

using namespace std;


int main(){

    int arr[10] = {10,20,30,40,50,60};
    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum += arr[i];
    }
    cout<<"Sum of All Array Elements : "<<sum<<" ."<<endl;

    return 0;
}
