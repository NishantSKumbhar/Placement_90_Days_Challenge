#include<iostream>

using namespace std;

class Rectangle{
    int len,bd;
public:
    void setValues(int l, int b){
        len = l;
        bd = b;
    }

    int area(){
        return len*bd;
    }

};

int main(){
    Rectangle r1;
    r1.setValues(6, 5);
    cout<<"Area : "<<r1.area()<<endl;

    return 0;
}
