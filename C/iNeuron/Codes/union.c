#include<stdio.h>

union item{
    int x;
    float y;
    double z;
    char c;

};

int main(){

    union item i1;
    i1.x = 5;
    printf("\n %d ",i1.x);
    i1.y = 2.3;
    printf("\n %f ",i1.y);

    i1.z = 1221.2323;
    printf("\n %lf ",i1.z);

    i1.c = 'A';
    printf("\n %c ",i1.c);
    //printf("\n %d ",i1.x);


    return 0;
}
