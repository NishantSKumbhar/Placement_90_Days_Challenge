#include<stdio.h>

int maxi(int *n1, int *n2){
    if(*n1>*n2){
        return *n1;
    }
    return *n2;
}

int main(){
    int a,b;
    printf("Enter two number : \n");
    scanf("%d%d",&a,&b);

    int p = maxi(&a,&b);
    printf("\nMaximum between %d and %d is %d",a,b,p);

    return 0;
}
