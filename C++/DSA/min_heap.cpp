#include<iostream>

using namespace std;

class MinHeap{
    int *arr;
    int s,c;

    MinHeap(int a){
        arr = new int[a];
        s = 0;
        c = a;
    }

    int left(int i){
        return 2*i + 1;
    }
    int right(int i){
        return 2*i + 2;
    }
    int parent(int i){
        return (i-1)/2;
    }

    void insert_element(int x){
        if(s == c){
            return;
        }
        s++;
        arr[s-1] = x;
        for(int i = s-1; i != 0 || arr[parent(i)] > arr[i];){
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
};

int main(){



    return 0;
}
