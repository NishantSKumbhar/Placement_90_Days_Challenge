#include<bits/stdc++.h>

using namespace std;


int main(){
	int n;
    cin >> n;

    while(n--){
        char arr[8][8];
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                cin >> arr[i][j];
            }
        }

        char ans = '0';

        for(int i = 0; i < 8; i++){
            int r = 0, b = 0;
            for(int j = 0; j < 8; j++){
                
                    if(arr[i][j] == 'R'){
                        r++;
                    }else if(arr[i][j] == 'B'){
                        b++;
                    }
                
            }
            cout << "h --> r : "<< r << "  b : "<< b << endl;
            if(r == 8){
                ans = 'R';
            }else if(b == 8){
                ans = 'B';
            }
        }

        for(int i = 0; i < 8; i++){
            int r = 0, b = 0;
            for(int j = 0; j < 8; j++){
                
                    if(arr[j][i] == 'R'){
                        r++;
                    }else if(arr[j][i] == 'B'){
                        b++;
                    }
                
            }
            cout << "v --> r : "<< r << "  b : "<< b << endl;
            if(r == 8){
                ans = 'R';
            }else if(b == 8){
                ans = 'B';
            }
        }

        cout << ans << endl;

    }
	return 0;	
}