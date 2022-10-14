#include <bits/stdc++.h>
using namespace std;



int main() {
    int arr[8][8];
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cout << j << "," << i << "  ";
        }
        cout << endl;
    }
    return 0;
}
