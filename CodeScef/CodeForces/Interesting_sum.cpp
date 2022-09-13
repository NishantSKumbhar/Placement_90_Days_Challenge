#include<iostream>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}
		
		int t;
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < n-1; j++){
				if(arr[j] > arr[j+1]){
					t = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = t;
				}
			}
		}
		int s1,s2,e1,e2;
		e1 = arr[n-1];
		e2 = arr[n-2];
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < n-1; j++){
				if(arr[j] < arr[j+1]){
					t = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = t;
				}
			}
		}
		
		
		s1 = arr[n-1];
		s2 = arr[n-2];
		
		
		int beauty = (e1 - s1) + (e2 - s2);
		cout<<beauty<<endl;
	}

	return 0;
}