#include<iostream>
//#include<conio.h>
#include<cstdlib>
using namespace std;

float area(int u, int v){

    return (u*v/2);
}
float area(float u, float v){

    return (u*v);
}
float area(float u){

    return (u*3.14*u);
}

int main(){
    int t = 1;
    float ar;
    while(t){
        cout<<" 1 : Area of Triangle"<<endl;
        cout<<" 2 : Area of Circle"<<endl;
        cout<<" 3 : Area of Rectangle"<<endl;
        cout<<" 0 : Exit"<<endl;
        cout<<"Enter the Choice : "<<endl;
        cin>>t;
        switch (t){
        case 1:
            int b,h;
            cout<<"Enter the Height and Base of Triangle : ";
            cin>>h>>b;
            ar = area(h,b);
            break;
        case 2:
            float r;
            cout<<"Enter the Radius of Circle : ";
            cin>>r;
            ar = area(r);
            break;
        case 3:
            float l,bd;
            cout<<"Enter the Length and Breadth of Rectangle : ";
            cin>>l>>bd;
            ar = area(l,bd);
            break;
        case 0:
            return 0;
            break;
        default:
            cout<<"PLEASE ENTER THE VALID NUMBER"<<endl;
        }
        cout<<"Area : "<<ar<<endl;
        system("pause");
        system("cls");
    }
    return 0;
}
