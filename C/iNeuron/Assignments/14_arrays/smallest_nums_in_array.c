#include<stdio.h>
#include<limits.h>
int main(){


    int i = 0, c = 0;
    printf("How many numbers in array : ");
    scanf("%d",&c);
    int arr[c];
    int min = INT_MAX;
    while(i < c){
        printf("Enter(%d) : ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i] < min){
            min = arr[i];
        }
        i++;
    }

    printf("\nMinimum  in array : %d",min);

    return 0;
}
