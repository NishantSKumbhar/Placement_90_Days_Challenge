#include<stdio.h>

int main(){

    int arr[10];
    int i = 0, s = 0, c = 0;
    printf("How many numbers in array : ");
    scanf("%d",&c);
    while(i < c){
        printf("Enter : ");
        scanf("%d",&arr[i]);
        s += arr[i];
        i++;
    }

    printf("\nSum : %d",s);

    return 0;
}
