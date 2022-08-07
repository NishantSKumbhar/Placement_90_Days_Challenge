#include<stdio.h>

// simple interest = Principle * rate * time

int simple_interest(int p, int r, int t){
    return p*r*t;
}


int main(){
    int p,r,t;
    printf("Enter the Principle : ");
    scanf("%d",&p);
    printf("Enter the Rate : ");
    scanf("%d",&r);
    printf("Enter the Time : ");
    scanf("%d",&t);

    printf("Simple Interest will be %d.",simple_interest(p, r, t));
    printf("\nTotal Amount will be %d.",simple_interest(p, r, t) + p);
    return 0;
}
