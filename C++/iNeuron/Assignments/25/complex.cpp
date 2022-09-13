#include<iostream>

using namespace std;


class complex_number{
private:
    int r, i;
public:
    void set_value(int re, int im){
        r = re;
        i = im;
    }

    void show_value(){
        cout<<r<<" + "<<i<<"j"<<endl;
    }

    void add_num(complex_number c1, complex_number c2){
        r = c1.r + c2.r;
        i = c1.i + c2.i;
    }
};


int main(){

    complex_number c1,c2,c3;
    c1.set_value(4,5);
    c1.show_value();

    c2.set_value(5, 2);
    c2.show_value();

    cout<<"Addition : "<<endl;
    c3.add_num(c1,c2);
    c3.show_value();

    return 0;
}
