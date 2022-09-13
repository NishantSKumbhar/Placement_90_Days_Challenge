#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;

struct Board {
    char arr[3][3] = {
                        {'1','2','3'},
                        {'4','5','6'},
                        {'7','8','9'}
                    };

    void print_board(){
        for(int i  = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cout<<arr[i][j]<<" | ";
            }
            cout<<"\n------------";
            cout<<endl;
        }
    }
    int is_valid(int n){
        int flag = 0;
        for(int i  = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(arr[i][j] == n){
                    flag = 1;
                }
            }
        }
        return flag;
    }
    void change_place(int n, char a){

            for(int i  = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    if(arr[i][j] == n){
                        arr[i][j] = a;
                    }
                }
            }


    }

    char wining_condition(){
            if(arr[0][0] == arr[0][1] && arr[0][0] == arr[0][2]){
                return arr[0][0];
            }else if(arr[2][0] == arr[1][1] && arr[2][0] == arr[0][2]){
                return arr[2][0];
            }else if(arr[0][1] == arr[1][1] && arr[0][1] == arr[2][1]){
                return arr[0][1];
            }else if(arr[0][0] == arr[1][0] && arr[0][0] == arr[2][0]){
                return arr[2][0];
            }else if(arr[0][2] == arr[1][2] && arr[0][2] == arr[2][2]){
                return arr[2][0];
            }else if(arr[2][0] == arr[1][1] && arr[2][0] == arr[0][2]){
                return arr[2][0];
            }else if(arr[2][0] == arr[2][1] && arr[2][0] == arr[2][2]){
                return arr[2][0];
            }else if(arr[1][0] == arr[1][1] && arr[1][0] == arr[1][2]){
                return arr[2][0];
            }else if(arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2]){
                return arr[2][0];
            }else{
                return 0;
            }
        }


};

void play_game_with_player(){
    struct Board b1;
    char p1[20],p2[20];
    cout<<"Enter Name of Player 1 : "<<endl;
    cin>>p1;
    cout<<"Enter Name of Player 2 : "<<endl;
    cin>>p2;
    cout<<"Hello"<<p1<<"&"<<p2<<endl;
    system("cls");
    char m = 'X';
    int mo = 1;
    while(int d = !(b1.wining_condition()) || mo != 9){
        cout<<"First Player : "<<p1<<" : X"<<endl;
        cout<<"Second Player : "<<p2<<" : O"<<endl;
        b1.print_board();
        cout<<"Enter the Number to move : "<<m<<endl;
        char c;
        cin>>c;
        if(b1.is_valid(c)){
            b1.change_place(c, m);
            mo++;
            if(m == 'O'){
                m = 'X';
            }else{
                m = 'O';
            }

        }else{
            cout<<"Place is Already Occupied ! Try Another Move !"<<endl;
            system("pause");
        }


        system("cls");
    }
    char d = b1.wining_condition();
    if(d){
        cout<<"Player :"<<d<<" has Won"<<endl;
    }else{
        cout<<"MATCH DRAW"<<endl;
    }
    b1.print_board();
    system("pause");
    system("cls");
}
int main(){
    struct Board b1;


    int des = 1;
    while(des != 4){
        cout<<"\t\t || TIC TAC TOE ||"<<endl;
        cout<<"Enter Your Choice : "<<endl;
        cout<<"1 : Want to Play With Smart Computer"<<endl;
        cout<<"2 : Want to Play With Evil Computer"<<endl;
        cout<<"3 : Want to Play With Player"<<endl;
        cout<<"4 : Exit"<<endl;
        cin>>des;
        switch(des){
        case 1:
            cout<<"OK"<<endl;
            break;
        case 2:
            cout<<"NOTOK"<<endl;
            break;
        case 3:
            play_game_with_player();
            break;
        case 4:
            cout<<"Thanks For Playing !"<<endl;
            return 0;
        default:
            cout<<"Please Enter the Valid Choice !"<<endl;
        }
    }
    cout<<"Thanks For Playing"<<endl;
    return 0;
}
