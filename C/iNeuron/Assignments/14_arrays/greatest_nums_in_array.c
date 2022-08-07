#include<stdio.h>
#include<limits.h>
int main(){


    int i = 0, c = 0;
    printf("How many numbers in array : ");
    scanf("%d",&c);
    int arr[c];
    int max = INT_MIN;
    while(i < c){
        printf("Enter(%d) : ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i] > max){
            max = arr[i];
        }
        i++;
    }

    printf("\nMaximum  in array : %d",max);

    return 0;
}
