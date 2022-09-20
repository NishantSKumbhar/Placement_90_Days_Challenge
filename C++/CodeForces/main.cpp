#include<bits/stdc++.h>

using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent) {
	cout<< meal_cost  / 100<<endl;
	cout<< (meal_cost  / 100 ) * tip_percent<<endl;
	
	double a = (tax_percent / 100.00);
	cout<<a<<endl;
    // float tip = tip_percent * ( meal_cost  / 100);
    // float tax = (tax_percent / 100) * meal_cost;
    // float ans = meal_cost+tip+tax;
    // cout<<round(ans)<<endl;
}

int main(){
	
	solve(12.00, 20, 8);
	return 0;	
}