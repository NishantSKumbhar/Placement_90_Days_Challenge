#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int fWeight = 15;
	int parr[] = {10, 5, 15, 7, 6, 18, 3};
	int warr[] = {2, 3, 5, 7, 1, 4, 1};

	float ansarr[7];
	// cout << setprecision(4);
	for(int i = 0; i < sizeof(parr)/sizeof(parr[0]); i++){
		float a  = (float)parr[i]/warr[i];
		ansarr[i] = a;
		cout << ansarr[i] << " ";
	}

	int ans[7];

	// while(fWeight > 0){
		
	// }

	return 0;
}