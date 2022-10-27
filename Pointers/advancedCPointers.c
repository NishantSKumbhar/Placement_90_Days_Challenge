#include<stdio.h>

struct Node{
    int a;
    char b;
    float c;
    int d;
};
int add(int ,int);
void setarray(int (*)[5]);
void printarray(int (*)[5]);
int main(){
    struct Node n1;
    n1.a = 89;
    n1.b = 'N';
    n1.c = 23.3;
    n1.d = 3;
    printf("\n%d",&n1.a);
    printf("\n%d",&n1.b);
    printf("\n%d",&n1.c);
    printf("\n%d",&n1.d);
    printf("\nSize : %d",sizeof(n1));
    printf("\nn1 : %d",n1);
    printf("\n&n1 : %d",&n1);

    int a[5] = {0};

    int (*p)[5];  // p is a pointer to array of 5 integers.
    p = &a;

    int i;
    printf("\nBase address of a : %d\n",&a);
    puts("Before : \n");
    for(i = 0; i < 5; i++){
        printf(" %d ",a[i]);
    }


    for(i = 0; i < 5; i++){
        (*p)[i] = (i+1)*10;
    }

    puts("\nAfter : \n");
    for(i = 0; i < 5; i++){
        printf(" %d ",a[i]);
    }
    puts("\nAfter : \n");
    for(i = 0; i < 5; i++){
        printf(" %d ",*(p + i));
    }
    puts("\nAfter : \n");
    for(i = 0; i < 5; i++){
        printf(" %d ",*(*p + i));
    }
    puts("\nAfter : \n");
    for(i = 0; i < 5; i++){
        printf(" %d ",*(a + i));
    }

    printf("\n\n");
    int *pi = a;
    for(i = 0; i < 5; i++){
        printf(" %d ",*(pi+i));
    }

    int brr[5];
    setarray(&brr);
    printarray(&brr);


    /// pointer to function
    int (*pfun)(int, int) = add;
    int g = pfun(2, 3);
    printf("\nAddition : %d",g);
    return 0;
}

void setarray(int (*p)[5]){
    int i;
    for(i = 0; i < 5; i++){
        (*p)[i] = (i * 10)+7;
    }
}
void printarray(int (*p)[5]){
    int i;
    printf("\n");
    for(i = 0; i < 5; i++){
        printf(" %d :",(*p)[i]);
    }
}

int add(int a, int b){
    return a+b;
}
