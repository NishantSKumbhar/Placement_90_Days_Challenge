#include<iostream>

using namespace std;


class Item{

public:
    int n;
    static int k;
private:
    int y;
    static int sk;

public:
    void setY(int x){
        y = x;
    }

    int getY(){
        return y;
    }
    /*
    void setK(int x){
        sk = x;
    }

    int getK(){
        return sk;
    }
    */

    /// static member function;
    static void setK(int x){
        sk = x;
    }

    static int getK(){
        return sk;
    }



};

/// static member variable;
int Item::k =100;

int Item::sk = 1000;

/// static local variable;
void fun(){
    int n = 0;
    static int j;
    n++;
    j++;
    cout<<n<<" : "<<j<<endl;

}


int main(){

    fun();
    fun();
    fun();

    Item i1,i2,i3,i4;

    i1.k = 12;
    i1.n = 10;
    cout<<i2.k<<endl;
    cout<<i2.n<<endl;
    cout<<i3.k<<endl;
    /// Another way to access static member variable, best way
    /// this method:
    cout<<Item::k<<endl;

    i3.setY(7);
    cout<<i4.getY()<<endl;
    i3.setK(199);
    cout<<i4.getK()<<endl;
    /// Above we can access the static without using object but here we cant so we make that function static
    /// without static function we cant use -->  Item::setK(8);
    cout<<Item::getK()<<endl;
    return 0;
}
