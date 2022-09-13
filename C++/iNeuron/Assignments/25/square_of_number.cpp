#include<iostream>

using namespace std;

class Square{
    int num;
    static int cnt;

public:
    void setValues(int a){
        num = a;
        cnt++;
    }

    int square(){
        cnt++;
        return num*num;

    }



    static void setValueCount(int k){
        cnt = k;
    }
    static int check_count(){
        return cnt;
    }
};

int Square::cnt=0;

int main(){
    Square s1;
    Square::setValueCount(0);
    //cout<<Square::check_count()<<endl;
    s1.setValues(5);
    //cout<<Square::check_count()<<endl;
    cout<<s1.square()<<endl;
    //cout<<Square::check_count()<<endl;
    cout<<"Number of Times Function Called : ";
    int c = Square::check_count();
    cout<<c;
    return 0;
}
