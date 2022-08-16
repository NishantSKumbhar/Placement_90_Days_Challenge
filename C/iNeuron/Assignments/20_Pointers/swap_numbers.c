#include<stdio.h>

void swap(int *num1, int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(){

    int n1,n2;
    printf("\nEnter the Two Numbers : ");
    scanf("%d %d",&n1,&n2);

    printf("\nBefore Swap -> n1 : %d   and   n2 : %d",n1,n2);
    swap(&n1,&n2);
    printf("\nAfter Swap -> n1 : %d   and   n2 : %d",n1,n2);
    return 0;
}
