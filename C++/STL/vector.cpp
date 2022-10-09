#include<iostream>
#include<vector>

#include<bits/stdc++.h>
using namespace std;

int main(){

    // vector<int> v1;
    // v1.push_back(10);
    // v1.push_back(20);
    // v1.push_back(20);
    // v1.push_back(30);

    // cout<<v1[0]<<endl;
    // cout<<v1.size()<<endl;
    // cout<<v1.at(1)<<endl;
    // //cout<<v1[4]<<endl;
    // //cout<<v1.at(4)<<endl;

    // vector<int> v2{1,2,3,4,5};
    // cout<<"Hello"<<endl;
    // cout<<v2[0]<<endl;

    // for(int x : v2){
    //     cout<<x<<endl;
    // }
    // for(int &x : v2){
    //     x = 89;
    // }
    // for(int x : v2){
    //     cout<<x<<endl;
    // }

    vector<int> v1;

    for(int i = 0; i < 10; i++){
        v1.push_back(i*10);
    }

    cout << "output" << endl;
    //for (auto i = g1.begin(); i != g1.end(); ++i)
    for(auto i = v1.begin(); i != v1.end(); i++){

        cout<<*i<<" ";
    }
    cout << endl;
    // for(auto i = v1.cbegin(); i != v1.cend(); i++){
    //     if(*i % 2 == 0){
    //         *i = 0;
    //     }
    // }
    for(auto i = v1.rbegin(); i != v1.rend(); i++){

        cout<<*i<<" ";
    }
    cout << endl ;
    for(auto i = v1.crbegin(); i != v1.crend(); i++){

        cout<<*i<<" ";
    }

    cout << "---------------------" << endl;

    cout << "Size : " << v1.size() << endl;
    cout << "Capacity : " << v1.capacity() << endl;
    cout << "MaxSize : " << v1.max_size() << endl;

    for(auto i = v1.cbegin(); i != v1.cend(); i++){
        cout << *i << "-";
    }

    v1.resize(5);

    cout << "\nAfter resize : " << endl;
    for(auto i = v1.cbegin(); i != v1.cend(); i++){
        cout << *i << "-";
    }

    if(v1.empty()){
        cout << "vector is Empty!" << endl;
    }else{
        cout << "Not Empty" << endl;
    }

    cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << endl;


    for(auto i = v1.cbegin(); i != v1.cend(); i++){
        cout << *i << " ";
    }

    cout << "\nv1[2] : " << v1[2] << endl;
    cout << "v1.at(3) : " << v1.at(3) << endl;
    cout << "v1.front() : " << v1.front() << endl;
    cout << "v1.back()  : " << v1.back() << endl;

    int *pos = v1.data();
    for(int i = 0; i < v1.size(); i++){
        cout << *(pos + i) << endl;
    }

    cout << "-------------------------------------------" << endl;

    cout << "Vector : ";
    for(auto i = v1.cbegin(); i != v1.cend(); i++){
        cout << *i << " ";
    }
    cout << endl;
    v1.pop_back();
    cout << "After poping :" << endl;
    cout << "Vector 1: ";
    for(auto i = v1.cbegin(); i != v1.cend(); i++){
        cout << *i << " ";
    }
    cout << endl; 

    vector<int> v2 = {11, 23, 34, 65};
    cout << "Vector 2 : ";
    for(auto i = v2.cbegin(); i != v2.cend(); i++){
        cout << *i << " ";
    }
    cout << endl;
    
    cout << "Afetr Swap : " << endl;

    v1.swap(v2);
    cout << "Vector 1: ";
    for(auto i = v1.cbegin(); i != v1.cend(); i++){
        cout << *i << " ";
    }
    cout << endl; 
    cout << "Vector 2 : ";
    for(auto i = v2.cbegin(); i != v2.cend(); i++){
        cout << *i << " ";
    }
    cout << endl;

    cout << "------------------------------------------" << endl;

    cout << "2 D VECTOR" << endl;

    vector<vector<int>> vx;
    vx = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << vx.size() << endl;
    cout << vx.capacity() << endl;
    cout << vx.max_size() << endl;
    for(int i = 0; i < vx.size(); i++){
        for(int j = 0; j < vx[i].size(); j++){
            cout << vx[i][j] << " ";
        }
        cout << endl;
    }
    int l = 0;
    int r = 0;
    int i,j;
    for(i = 1; i <= vx.size(); i++){
        for(j = 1; j <= vx.size(); j++){
            
            cout << i << ","<< j << "  -> "<< vx[i-1][j-1] <<" |";
        }
        cout << endl;
    }
    
    return 0;
}
