#include<iostream>

using namespace std;

void find_max(int n1, int n2){
    if(n1>n2){
        cout<<n1<<" is Greater than "<<n2<<"."<<endl;
    }else{
        cout<<n2<<" is Greater than "<<n1<<"."<<endl;
    }
}
void find_max(float n1, float n2){
    if(n1>n2){
        cout<<n1<<" is Greater than "<<n2<<"."<<endl;
    }else{
        cout<<n2<<" is Greater than "<<n1<<"."<<endl;
    }
}

int main(){
    float a,b;
    cout<<"Enter the Two Numbers : ";
    cin>>a>>b;

    find_max(a,b);
    return 0;
}
