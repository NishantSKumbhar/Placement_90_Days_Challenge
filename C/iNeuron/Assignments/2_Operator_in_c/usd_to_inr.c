#include<stdio.h>

int main(){



    int dollor = 76.23;
    int r;
    printf("Enter the Rupees : ");
    scanf("%d",&r);

    printf("Rupees : %d  |  USD : %d",r, r/dollor);

    return 0;
}
