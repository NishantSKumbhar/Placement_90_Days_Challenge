#include<stdio.h>

int main(){

    int *p;

    float *f;

    f = (float*)malloc(4);
    p = malloc(4);     /// 4: size of the variable


    *f = 89.45;
    *p = 23;
    printf("*f : %f ",*f);
    printf("f  : %d   ",f);
    printf("*p : %d ",*p);
    printf("p  : %d   ",p);

    int *q;
    q = calloc(5, 4);
    *(q + 0) = 89;
    *(q + 1) = 90;
    *(q + 2) = 91;
    *(q + 3) = 92;
    *(q + 4) = 93;
    printf("\nArray : ");
    printf(" %d ",*(q+1));

    int *c = calloc(p, 8);

    free(q);
    free(p);
    free(f);
    free(c);
    return 0;
}
