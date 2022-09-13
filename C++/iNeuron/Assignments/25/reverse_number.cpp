#include<iostream>

using namespace std;

class ReverseNumber{
    int n;
public:
    ReverseNumber(int a){
        n = a;
    }


    int reverse_num(){
        int v = 0;
        int r;
        while(n){
            r = n % 10;

            v = r + v*10;

            n = n/10;
        }
        return v;
    }

};

int main(){
    ReverseNumber r1(2321);
    int a = r1.reverse_num();
    cout<<a;
    return 0;
}
