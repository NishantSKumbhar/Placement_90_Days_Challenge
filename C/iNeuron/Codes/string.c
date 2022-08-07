#include<stdio.h>
#include<string.h>

int main(){

    char name[30];
    fgets(name,30, stdin);

    printf("Hello, %s",name);

    printf("%s",strupr(name));

    return 0;
}
