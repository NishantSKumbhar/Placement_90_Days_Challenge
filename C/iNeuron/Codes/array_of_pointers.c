#include<stdio.h>


void display(int *ar_pointer[]){
    int a = *(ar_pointer)[0][0];
}

/// Under Construction
int main(){

    int arr1[] = {10, 20, 30,40, 50};
    int arr2[] = {12, 23,34,45,56};
    int arr3[] = {101, 102, 103};

    int *ar_p[3];
    ar_p[0] = arr1;
    ar_p[1] = arr2;
    ar_p[2] = arr3;

    display(ar_p);
    return 0;
}
