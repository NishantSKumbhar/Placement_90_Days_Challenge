#include<stdio.h>


int f1(int x){

    printf("\nx : %d",x);
    return x+1;
}


int main(){

    int (*p)(int);

    p = f1;
    printf("\nAfter : %d",p(8));
    return 0;
}
