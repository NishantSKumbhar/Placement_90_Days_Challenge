#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[10] = {2, 43,2, 12,3, 6,76,10, 1, 199};

    for(int i = 0; i < 10; i++){
        cout<<arr[i]<<" ,";
    }
    sort(arr, arr+10);

    cout<<"\nAfter Sort : "<<endl;
    for(int i = 0; i < 10; i++){
        cout<<arr[i]<<" ,";
    }

    if(binary_search(arr, arr+10, 199)){
        cout<<"\nYes"<<endl;
    }else{
        cout<<"\nNO"<<endl;
    }

    return 0;
}
