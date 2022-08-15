#include<stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int sum(int a, int b){
    printf("\nSum of a and b is %d",a+b);
    return (a+b);
}

int main(){

    int n = 10;
    int *p;
    printf("n : %d ",n);
    printf("\n&n : %u ",&n);
    printf("\n*&n : %d ",*&n);
    p = &n;
    *p = 1000;
    printf("\nAfter Pointer : ");
    printf("\nn : %d ",n);
    printf("\n&n : %u ",&n);
    printf("\n*&n : %d ",*&n);

    printf("\n*****************************************");

    int number = 100;
    int *p1;
    p1 = &number;
    printf("\nnumber : %d ",number);
    printf("\n*p1 : %d ",*p1);
    int **p2 = &p1;
    printf("\n**p2 : %d ",**p2);
    printf("\n*p2 : %d ",*p2);
    int ***p3 = &p2;
    printf("\n***p3 : %d ",***p3);
    printf("\n**p3 : %d ",**p3);
    printf("\n*p3 : %d ",*p3);
    printf("\nAfter ***p3 = 1001 ");
    ***p3 = 1001;
    printf("\n***p3 : %d ",***p3);
    printf("\nnumber : %d ",number);

    printf("\n*****************************************");

    int x = 101;
    int y = 010;
    printf("\nx : %d     and   y : %d",x,y);
    swap(&x,&y);
    printf("\nx : %d     and   y : %d",x,y);


    printf("\n*****************************************");

    printf("\nArray : Using Pointer");

    int arr[5];
    int i;
    int* k = arr;
    for(i = 0; i <= 5; i++){
        scanf(" %d ",(k + i));
    }
    printf("\nArray");
    for(i = 0; i <= 5; i++){
        printf(" %d ",*(k+i));
    }
    printf("\n*****************************************");
    printf("\nFunction Pointer");

    int (*h)(int, int);
    h = sum;
    printf("\nSum of 4 and 5 is %d",h(4,5));

    return 0;

}
