#include<iostream>

using namespace std;

class Area{
    int radius, length, breadth;
public:
    void setValuesCircle(int r){
        radius = r;
    }
    void setValuesRectangle(int l, int b){
        length = l;
        breadth = b;
    }
    void setValuesSquare(int l){
        length = l;
    }

    float areaCircle(){
        return 3.14*radius*radius;
    }
    float areaRectangle(){
        return length*breadth;
    }
    float areaSquare(){
        return length*length;
    }

};

int main(){
    Area a1,a2,a3;
    a1.setValuesCircle(6);
    cout<<"Area Circle : "<<a1.areaCircle()<<endl;

    a2.setValuesRectangle(6,5);
    cout<<"Area Rectangle: "<<a2.areaRectangle()<<endl;

    a3.setValuesSquare(6);
    cout<<"Area Square: "<<a3.areaSquare()<<endl;

    return 0;
}
