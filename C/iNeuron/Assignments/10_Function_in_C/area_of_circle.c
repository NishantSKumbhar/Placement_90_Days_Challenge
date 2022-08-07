#include<stdio.h>


int area_of_circle(int radius){
    return (3.14) * (radius * radius);
}


int main(){
    int rad;
    printf("Enter the radius : ");
    scanf("%d",&rad);

    printf("Area of Circle having radius %d is %d.",rad, area_of_circle(rad));

    return 0;
}
