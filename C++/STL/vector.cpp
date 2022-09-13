#include<iostream>
#include<vector>

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(20);
    v1.push_back(30);

    cout<<v1[0]<<endl;
    cout<<v1.size()<<endl;
    cout<<v1.at(1)<<endl;
    //cout<<v1[4]<<endl;
    //cout<<v1.at(4)<<endl;

    vector<int> v2{1,2,3,4,5};
    cout<<"Hello"<<endl;
    cout<<v2[0]<<endl;

    for(int x : v2){
        cout<<x<<endl;
    }
    for(int &x : v2){
        x = 89;
    }
    for(int x : v2){
        cout<<x<<endl;
    }



    return 0;
}
