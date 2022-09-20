#include<iostream>

using namespace std;

class SimpleInterest{
	int p,r,t;
	
public:
	SimpleInterest(int pr, int ra, int ti){
		p = pr;
		r = ra;
		t = ti;
		
	}
	

	float getSimpleInterest(){
		
		return (p*t)*(r/100.00);
	}
	

};



int main(){

	int p,r,t;
	cout<<"Enter the principal, rate, time : ";
	cin>>p>>r>>t;

	SimpleInterest s1(p,r,t);
	int ans = s1.getSimpleInterest();
	cout<<"Simple Interest : "<<ans<<endl;

	
	
	return 0;
}