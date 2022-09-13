#include<iostream>

using namespace std;

class LargestNumber{
    int n1,n2,n3;
public:
    void setValues(int a, int b, int c){
        n1 = a;
        n2 = b;
        n3 = c;
    }


    int findLargets(){
        /*if(n1>n2){
            if(n1>n3){
                return n1;
            }else{
                return n3;
            }
        }else if(n2 > n3){
            if(n2 > n1){
                return n2;
            }else{
                return n1;
            }
        }else{
            if(n3 > n2){
                return n3;
            }else{
                return n2;
            }
        }*/

        if(n1>n2 && n1>n3){return n1;}
        if(n2>n1 && n2>n3){return n2;}
        if(n3>n2 && n3>n1){return n3;}
    }

};

int main(){
    LargestNumber l1;
    l1.setValues(29,10,60);
    int a = l1.findLargets();
    cout<<a;
    return 0;
}
