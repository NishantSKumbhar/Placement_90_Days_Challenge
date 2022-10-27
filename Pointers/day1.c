#include<stdio.h>

struct A{
    int a;
    char b;
    float c;

};

int main(){

    struct A a1;
    printf("\na : %d",&a1.a);
    printf("\nb : %d",&a1.b);
    printf("\nc : %d",&a1.c);

    return 0;
}
