#include<stdio.h>

int main(){

    int n;
    printf("Enter the numbers in array : ");
    scanf("%d",&n);

    int arr[n],i;

    for(i = 0; i < n; i++){
        printf("Enter(%d) : ",i+1);
        scanf("%d",&arr[i]);
    }

    int j,temp,flag;
    for(i = 0; i < n-1; i++){
        flag = 0;
        for(j = 0; j < n-1; j++){
            if(arr[j] > arr[j+1]){
                flag = 1;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(flag == 0){
            printf("\nRound Completed : %d",i);
            break;
        }
    }

    printf("\nSorted Array : ");
    for(i = 0; i < n; i++){
        printf(" %d ",arr[i]);

    }
    return 0;
}
