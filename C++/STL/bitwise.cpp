#include<iostream>

using namespace std;

int main(){
    /*
    cout<<"Jay Ganesh !"<<endl;
    int a = 16 << 1;
    cout<<a<<endl;
    a = 16 >> 1;
    cout<<a<<endl;
    a = 3 << 3;
    cout<<a<<endl;
    a = 2 >> 3;
    cout<<a<<endl;

    int num;
    cin>>num;
    if(num & 1){
        cout<<"ODD"<<endl;
    }else{
        cout<<"EVEN"<<endl;
    }
    */

    //int a = 4^5^4^8^5;
    //cout<<a<<endl;

    /*int arr[8] = {1,4,3,2,5,8,7};
    int brr[8] = {1,2,3,4,5,6,7,8};
    int a = 0;
    for(int i = 0; i < 8; i++){
        a = a ^ arr[i]^brr[i];
    }
    cout<<a<<endl;*/
    //cout<<14 % 8<<endl;

    /*int num,bit;
    cout<<"Enter the Number : "<<endl;
    cin>>num;
    cout<<"Enter the position of bit to be found :"<<endl;
    cin>>bit;

    int mask = 1;
    mask = mask << bit;
    if(num & mask){
        cout<<bit<<" th position bit is 1"<<endl;
    }else{
        cout<<bit<<" th position bit is 0"<<endl;
    }*/

    //int n = 1 << 1;
    //cout<<n;

    /*int num,bit;
    cout<<"Enter the Number : "<<endl;
    cin>>num;
    cout<<"Enter the position of bit to be set :"<<endl;
    cin>>bit;
    int mask = 1;
    mask = mask << bit;
    if(num & mask){
        cout<<" th position bit is 1, So don't need to set."<<endl;
    }else{
        cout<<bit<<" th position bit is 0, so after set, new number will be :"<<endl;
        int a = 1 << bit;
        num = num + a;
        cout<<num;
    }*/

    /// ANOTHER METHOD
    /*int num,bit;
    cout<<"Enter the Number : "<<endl;
    cin>>num;
    cout<<"Enter the position of bit to be set :"<<endl;
    cin>>bit;
    int mask = 1 << bit;
    num = num | mask;
    cout<<"New Number : "<<num<<endl;*/

    //int o = 5 & 1;
    //cout<<o;
    /*int num,cnt = 0;
    cout<<"Enter the Number : "<<endl;
    cin>>num;
    while(num){
        if(num & 1){
            cnt++;
        }
        num = num >> 1;
    }
    cout<<"Set Points : "<<cnt<<endl;*/

    /// Power of 2
    /*int num;
    cout<<"Enter the Number : "<<endl;
    cin>>num;
    int cnt = 0;
    while(num){
        if(cnt > 1){
            cout<<"NOT POWER OF 2"<<endl;
            return 0;
        }

        if(num & 1){
            cnt++;
        }
        num = num >> 1;
    }
    if(cnt == 1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }*/
    int a = 8 & 12;
    cout<<a<<endl;

    return 0;
}
