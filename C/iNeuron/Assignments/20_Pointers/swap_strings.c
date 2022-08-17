#include<stdio.h>

void swap(char *n1, char *n2){
    char temp[20];
    strcpy(temp, n1);
    strcpy(n1, n2);
    strcpy(n2, temp);
}

int main(){

    char a[20],b[20];
    printf("\nEnter s 1 : ");
    fgets(a,20,stdin);
    printf("\nEnter s 2 : ");
    fgets(b,20,stdin);

    printf("\nBefore Swap --> a : %s   |   b : %s",a,b);
    swap(a, b);
    printf("\nAfter Swap --> a : %s   |   b : %s",a,b);
    return 0;
}
