/*
Given a signed 32-bit integer x, return x with its digits reversed.
If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1],
 then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
*/

#include <bits/stdc++.h>

using namespace std;

class ReverseInteger{
public:
    int reverse_number(int x){
        int sum = 0;
        int MAX = pow(2,31) - 1;
        int MIN = pow(-2,31);

        while(x){
            int p = x % 10;

            if((sum > (MAX / 10)) || (sum == MAX) && (p >= (MAX % 10))){
                return 0;
            }
            if((sum < (MIN / 10)) || (sum == MIN) && (p <= (MIN % 10))){
                return 0;
            }

            sum = sum * 10 + p;

            x = x / 10;
        }
        return sum;
    }
};

int main(){
    int number = 1534236469;
    ReverseInteger r1;
    int result = r1.reverse_number(number);
    cout<<"Before : "<<number<<" and After : "<<result<<endl;

    return 0;
}
