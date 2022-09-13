#include<iostream>

using namespace std;

class Circle{
    int radius;
public:
    void setValues(int r){
        radius = r;
    }

    float area(){
        return 3.14*radius*radius;
    }

};

int main(){
    Circle c1;
    c1.setValues(6);
    cout<<"Area : "<<c1.area()<<endl;

    return 0;
}
