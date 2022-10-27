#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int arr[n][n];
		if(m == 1){
			cout << "YES" << endl;
		}else if(m > n){
			cout << "NO" << endl;
		}else{
			int flag = 1;
			while(m--){
				int a, b;
				cin >> a >> b;
				if(!(a == b || (a+b) == n+1)){
					flag = 0;
				}
				arr[a-1][b-1] = 1;
			}
			if(flag){
				cout << "NO" << endl;
			}else{
				cout << "YES" << endl;
			}
		}
	}
	return 0;
}