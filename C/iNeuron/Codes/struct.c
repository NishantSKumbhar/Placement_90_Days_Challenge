#include<stdio.h>


struct date{

    int day;
    int month;
    int year;

}d1,d2;

struct date d3;

// d1, d2, d3 are global variable

int main(){

    struct date d4 = {23, 3, 2022};

    struct date d5;
    d5.day = 9;
    d5.month = 10;
    d5.year = 2022;


    struct date d6;

    printf("Enter the Todays Date : ");
    scanf("%d/%d/%d",&d6.day,&d6.month,&d6.year);

    printf("\nSo, Todays Date is : %d/ %d / %d",d6.day,d6.month,d6.year);

    return 0;
}
