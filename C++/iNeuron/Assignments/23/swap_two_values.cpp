#include<iostream>

using namespace std;


int main(){

    int n1,n2;
    cout<<"Enter the Two number to Swap --> ";
    cin>>n1>>n2;

    cout<<"Before Swap : number 1 : "<<n1<<" and number 2 : "<<n2<<endl;
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;

    cout<<"After Swap : number 1 : "<<n1<<" and number 2 : "<<n2<<endl;

    return 0;
}
