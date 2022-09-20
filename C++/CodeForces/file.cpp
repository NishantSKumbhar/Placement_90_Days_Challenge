#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
    cin >> n;
    while (n--){
      	string s;
      	cin >> s;
      	vector<char> ans;
      	int i;
      	for(i = 0; i < s.length(); i++){
      		if(i % 2 == 0){
      			ans.push_back(s[i]);
      		}
      	}

      	ans.push_back(' ');
      	ans.push_back(' ');
      	for(i = 1; i < s.length(); i++){
      		if(i % 2 != 0){
      			ans.push_back(s[i]);
      		}
      	}

      	for(auto x: ans){
      		cout<<x;
      	}
      	cout<<endl;
    } 
	return 0;
}