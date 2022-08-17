#include<stdio.h>

void sum_arr(int *p, int n, int *s){
    int i;
    for(i = 0; i < n; i++){
        *s = *s + *(p+i);
    }
}
int main(){
    int arr[10];
    printf("\nEnter 10 Elements : ");
    int i;
    for(i = 0; i < 10; i++){
        scanf("%d",arr+i);
    }
    int sum= 0;
    sum_arr(arr,10,&sum);

    printf("\nSum of Array Elements : %d",sum);
    return 0;
}
