#include <bits/stdc++.h>

using namespace std;

/*
class Mobile{

    int Mobile(){
        cout<<"Constrctor"<<endl;
        return 0;
    }

};
*/

class Base{
public:
    Base(){
        cout<<"B Constructor"<<endl;
    }

    ~Base(){
        cout<<"B Destructor"<<endl;
    }
};

class Derived : public Base{

public :
    Derived(){
        cout<<"D Constructor"<<endl;
    }

    ~Derived(){
        cout<<"D Destructor"<<endl;
    }
};

int main(){
    cout<<"------------------ : Jay Ganesh ! : ------------------"<<endl;
    printf("\nHello C & C++");
    /*
    int x = 2, y = 0;
    int z = (x % 2 == 0) ? printf("\nYes") : printf("\nNo");

    printf("\n------------------------------------------------------");

    int x = 2, y = 0;
    int z = (y++) ? y==1 && x : 0;

    printf("\nZ : %d", z);  // z = 0

    printf("\n------------------------------------------------------");

    int a = 10, b = 5, c = 5;
    int d;

    d = a == (b+c);
    printf("\nd : %d", d);  // d = 1
    printf("\n------------------------------------------------------");

    int x = 1;
    short int i = 2;
    float f =  3;

    if (sizeof((x == 2) ? f : i) == sizeof(float)){
        printf("\nFlaot");
    }else if (sizeof((x == 2) ? f : i) == sizeof(short int)){
        printf("\Short int");
    } // float

    printf("\n------------------------------------------------------");


    while(){
        printf("in ");

    }
    printf("\nAfter");
    //Compile Error

    printf("\n------------------------------------------------------");

    */

   // Mobile m1;

    Derived obj;



    return 0;
}
