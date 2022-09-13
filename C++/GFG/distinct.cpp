#include<iostream>

using namespace std;

int main(){

    int arr[] = {10, 23, 10, 23, 34, 10, 23, 10 ,34, 5, 1, 10};
    // int c = 0;
    // for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    //     int flag = 0;
    //     for(int j = i; j > 0; j--){
    //         cout<<arr[j];
    //     }
    //     if(!flag){
    //         c++;
    //     }
    // }

    // cout<<c;
    for(int x: arr){
        cout<<x<<" ";
    }
    int y;
    cout<<"Enter the Number : ";
    cin>>y;

    cout<<"Yes"<<y<<endl;


    return 0;
}

/*
{
    "cmd" : [ "g++.exe", "-std=c++17", "${file_name}", "-o",
              "${file_base_name}.exe", "&&", "start", "cmd",
              "/k", "${file_base_name}.exe" ],
    "file_regex" : "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.*)$",
    "shell" : true,
    "working_dir" : "$file_path",
    "selector" : "source.cpp",
}
*/