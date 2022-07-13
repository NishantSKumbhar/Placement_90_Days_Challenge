#include<stdio.h>
#include<conio.h>


/// predict the error and why
void main(){
    float a = 100.00;
    {
        auto float a = 250.14;
        {
            auto float b = 325;
            printf("\n%f %f", a, b);
            b++;
        }
        a++;
        printf("\n%f %f", a, b);
        a++;
    }
    printf("\n%f",a);
}
