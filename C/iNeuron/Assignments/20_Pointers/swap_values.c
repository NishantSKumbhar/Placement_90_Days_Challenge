#include<stdio.h>

void swap(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;

}

int main(){

    int a,b;
    printf("\nEnter 1 : ");
    scanf("%d",&a);
    printf("\nEnter 2 : ");
    scanf("%d",&b);

    printf("\nBefore Swap --> a : %d   |   b : %d",a,b);
    swap(&a, &b);
    printf("\nAfter Swap --> a : %d   |   b : %d",a,b);
    return 0;
}
