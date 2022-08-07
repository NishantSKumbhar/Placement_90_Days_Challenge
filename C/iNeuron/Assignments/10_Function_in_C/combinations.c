#include<stdio.h>

/**
nCr =       n!
       ------------
        r! * (n-r)!


nPr =       n!
       ------------
          (n-r)!
**/

int factorial(int number){
    if(number == 0){
        return 1;
    }

    return number * factorial(number - 1);
}

int combinations(int num, int r){

    float ans = factorial(num) / (factorial(num-r) * factorial(r));
    return ans;
}


int permutations(int num, int r){

    float ans = factorial(num) / factorial(num-r);
    return ans;
}

int main(){
    int number, r;
    printf("Enter the Number : ");
    scanf("%d",&number);
    printf("Enter the r : ");
    scanf("%d",&r);

    printf("\nPermutation is %d",permutations(number, r));
    printf("\nCombination is %d",combinations(number, r));
    return 0;
}
