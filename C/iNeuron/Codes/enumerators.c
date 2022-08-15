#include<stdio.h>
enum month{

        jan,feb,march,aprl,may

};

enum boolean_value{
    false_value,true_value

};

enum boolean_value odd_even(int x){

    if(x % 2 == 0){
        return true_value;
    }
    return false_value;
}

int main(){

    enum month m1,m2,m3;

    enum boolean_value result = odd_even(12);
    if(result){
        printf("Even Number");
    }else{
        printf("Odd Number");
    }

    return 0;

}
