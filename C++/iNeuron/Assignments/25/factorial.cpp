#include<iostream>

using namespace std;

class Factorial{
    int num;
public:

    int find_facto(int n){
        if(n < 1){
            return 1;
        }

        return n*find_facto(n-1);
    }

};

int main(){
    Factorial f1;
    int a = f1.find_facto(5);
    cout<<a;
    return 0;
}
