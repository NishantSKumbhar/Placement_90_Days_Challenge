#include<iostream>

using namespace std;

class Time{
    int hour, minute, second;
public:
    void setTime(int hr, int mi, int sec){
        hour = hr;
        minute = mi;
        second = sec;
    }

    void display_time(){
        cout<<"Hello , Nishant"<<endl;
        cout<<"Its "<<hour<<"hrs : "<<minute<<" min : "<<second<<" second."<<endl;
    }
};

int main(){
    Time t1;
    t1.setTime(12, 34, 57);
    t1.display_time();
    return 0;
}
