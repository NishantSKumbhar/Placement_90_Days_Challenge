#include<stdio.h>

void insertion_sort(int arr[], int n){
    int j, i, temp,k;
    for(i = 1; i < n; i++){
        j = i -1;
        temp = arr[i];
        if(arr[j] > arr[i]){
            arr[i] = arr[j];
            for(k= j-1; k >= 0; k--){
                if(temp > arr[k]){
                    arr[k+1] = temp;
                }

            }
            arr[k] = temp;
        }else{
            break;
        }
    }

    printf("Sorted Array : ");
    for(j = 0; j < 10; j++){
        printf(" %d ",arr[j]);
    }
}


int main(){

    int arr[] = {10, 2, 34, 5, 37 , 87, 94, 64, 54, 91};
    insertion_sort(arr, 10);



    return 0;
}
