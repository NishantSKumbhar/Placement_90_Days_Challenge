#include<stdio.h>
#include<limits.h>

int get_min(int brr[], int n, int start){
    int min = INT_MAX;
    int j,k;
    for(j = start; j < n; j++){
        if(brr[j] < min){
            min = brr[j];
            k = j;
        }
    }
    return k;
}


int main(){


    int i = 0, c = 0;
    printf("How many numbers in array : ");
    scanf("%d",&c);
    int arr[c];

    while(i < c){
        printf("Enter(%d) : ",i+1);
        scanf("%d",&arr[i]);
        i++;
    }

    for(i = 0; i < c-1; i++){

        int m = get_min(arr, c, i);
        int flag;
        flag = arr[i];
        arr[i] = arr[m];
        arr[m] = flag;
    }
    printf("\nSorted Array : ");
    for(i = 0; i < c; i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}
