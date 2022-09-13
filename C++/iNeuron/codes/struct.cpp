#include<iostream>

using namespace std;

struct master{
	int masrks;
	float percent;
	master(int m, float p){
		
		m = masrks;
		p = percent;
	}
	

};

int main(){

	master *m1 = new master(90, 89.5);
	m1->masrks = 12;
	m1->percent = 100;
	cout<<m1->masrks;
	
	return 0;
}