#include<iostream>

using namespace std;

void add_two_numbers(int n1, int n2){
    cout<<"Addition of Marks is "<<n1+n2<<endl;
}
void add_two_numbers(float n1, float n2){
    cout<<"Addition of Percentage is "<<n1+n2<<endl;
}

int main(){
    int a,b;
    cout<<"Enter the Two Numbers : ";
    cin>>a>>b;

    add_two_numbers(a,b);
    float x,y;
    cout<<"Enter the Two Percentage : ";
    cin>>x>>y;

    add_two_numbers(x,y);
    return 0;
}
