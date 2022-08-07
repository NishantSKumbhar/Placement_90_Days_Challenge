#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int f_week,fri;
	    cin>>f_week;
	    cin>>fri;
	    int w_hrs = f_week * 4 + fri;
	    cout<<w_hrs<<endl;
	}

	return 0;
}
