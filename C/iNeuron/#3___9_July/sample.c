#include<stdio.h>

int main(){

    int a = 10;
    int e, f;
    char b = 'a';
    char g;
    float c = 232.23;
    double d = 28934.34565344;

    printf("int a : %d\n", a);
    printf("int e : %d\n", e);
    printf("int f : %d\n", f);

    printf("char b : %c\n", b);
    printf("char g : %c\n", g);

    printf("float c : %f\n", c);
    printf("double d : %f\n", d);

    printf("\n*******************************************\n");

    int i;
    for(i = 1; i <= 256; i++){
        printf("\n%d : %c",i, i);
    }

    printf("\n*******************************************\n");

    char j = 7;
    printf("i : %d\n", i);

    printf("\n*******************************************\n");
        int k;
        for(k = 1; k <= 100; k++){
        printf("^   ");
    }
    printf("\n*******************************************\r");

    printf("at the beginning");

    printf("\n*******************************************");
    printf("\n*******************************************");
    printf("\n*******************************************");
    printf("\n*******************************************");
    printf("\n*******************************************");
    int num;
    printf("\nEnter Value : \n");
    scanf("%d", &num);
    printf("The Value is : %d",num);
    printf("\n*******************************************");

    int t,u;
    printf("\nEnter Two Numbers : \n");
    scanf("%d%d",&t,&u);
    printf("Numbers : %d & %d",t,u);
    return 0;
}
