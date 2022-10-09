#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        int c = 0;
        int flag = 0;
        for(int i = 0; s[i]; i++){
            if(c > 2){
                flag = 1;
                break;
            }
            else if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                c++;
            }else{
                c = 0;
            }
            
            
        }
        
        if(flag){
            cout << "Happy" << endl;
        }else{
            cout << "Sad" << endl;
        }
    }
    return 0;
}
