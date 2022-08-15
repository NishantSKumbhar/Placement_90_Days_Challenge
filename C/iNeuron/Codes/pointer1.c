#include<stdio.h>

int main(){

    int x = 10;

    printf(" %d ",&x);
    printf(" %u ",&x);
    printf(" %p ",&x);


    printf("\n**************************************************");

    int *p = &x;
    printf("\n %d ",*p);

    char s = 's';

    int * p1 = &s;
    printf("\n %d ",*p1);
    printf("\n**************************************************");

    int a,b=10;
    printf("\nAddress of a : %d",&a);
    printf("\nAddress of b : %d",&b);

    printf("\n &a - &b : %d",&a-&b);
    return 0;
}
