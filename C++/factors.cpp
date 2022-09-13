#include<iostream>

using namespace std;

int Jaadugar(int num){
    if(num < 0){
        cout<<"Wait"<<endl;
    }
    if(num == 1){
        cout<<1<<endl;
    }
        int i,c = 0;
        while(num != 1){
        for(i = 2; i <= num; i++){
            //cout<<"i : "<<i<<endl;
            if(num % i == 0){
                    cout<<i<<endl;
                    c++;
                    break;
                }
            }
            num = num/i;

        }
    cout<<"Total : "<<c<<endl;
}

int main(){

    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    Jaadugar(n);

    return 0;
}
