#include<stdio.h>

int main(){
    printf("Handle Pointers\n");
    int a =10;
    int *p;
    p = &a;
    printf("a : %d | &a : %d\n",a,&a);
    printf("p : %d | *p : %d\n",p,*p);


    return 0;
}
