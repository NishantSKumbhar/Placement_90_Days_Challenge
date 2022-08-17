#include<stdio.h>

int add(int a, int b){

    int sum = a + b;

    return sum;

}


void display(){
    printf("\nHello BLUESKY");
}

void display_name(char *name){
    printf("\nHello %s",name);
}
int main(){

    int n1 = 89, n2 = 23;

    // int s = add(n1,n2);
    // printf("Sum : %d ",s);
    int (*p)(int,int);
    p = &add;
    //p = add;
    printf("Sum : %d",(*p)(2,3));


    int (*p1)();
    p1 = display;
    (*p1)();
    //p1();


    int (*p2)(char *);
    p2 = display_name;
    p2("Nana");
    //(*p2)("Nana");
    return 0;
}
