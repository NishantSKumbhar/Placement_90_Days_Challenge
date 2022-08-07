#include<stdio.h>

int selection_sort(int brr[], int n, int start){
    int min_value = brr[start];
    int min_index = start;
    int i, temp;
    for(i = start+1; i < n; i++){
        if(brr[i] < min_value){
            min_value = brr[i];
            min_index = i;
        }
    }

    return min_index;
}


int main(){

    int arr[] = {10, 2, 34, 5, 37 , 87, 94, 64, 54, 91};
    int j, temp, min_index;
    for(j = 0; j < 9; j++){
        min_index = selection_sort(arr, 10, j);
        temp = arr[j];
        arr[j] = arr[min_index];
        arr[min_index] = temp;
    }

    printf("Sorted Array : ");
    for(j = 0; j < 10; j++){
        printf(" %d ",arr[j]);
    }

    return 0;
}
