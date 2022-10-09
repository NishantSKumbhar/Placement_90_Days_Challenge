#include<bits/stdc++.h>

using namespace std;


int main(){
	int n;
    cin >> n;

    while(n--){
        string s;
        cin >> s;
        n = s.length();
        if(n > 10){
            string a1 = s.substr(0, 1);
            a1 += to_string(n-2);
            a1 += s[n-1];
            cout << a1 << endl;
        }else{
            cout << s << endl;
        }
    }
	return 0;	
}