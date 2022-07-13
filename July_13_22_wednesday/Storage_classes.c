#include<stdio.h>

void fun();

int g;

int main(){

    printf("Jay Ganesh !\n");

    int x = 29;
    auto int y = 12;

    printf("%d\n", y);
    {
        auto int y = 23;
        printf("%d\n", y);
    }

    printf("%d\n", y);


    register int r = 89;

    r++;
    --r;
    r++;
    printf("r :%d\n", r);

    fun();
    fun();

    printf("Global : g : %d\n",g);
    return 0;
}


void fun(){
    static int x = 0;
    x++;
    printf("%d\n",x);
    int g = 99;
    g++;
    printf("After incrementing : g : %d\n",g);

    printf("I want to use extern : \n");

    extern int g;
    printf("Global g : %d", g);
}
