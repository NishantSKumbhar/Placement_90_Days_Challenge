#include<iostream>

using namespace std;

// template <typename T>
// template <class T>
template <class B, class C, class A>

// float addi(float n1, float n2){
// 	return n1+n2;
// }

// T addi(T n1, T n2){
// 	return n1+n2;
// }

A master(B n1, C n2){
	return n1 * n2;
}
int main(){
	
	// float ans = addi<float>(23.5, 45);

	// cout << "Answer is : " << ans << endl;
	// int ans1 = addi<int>(23, 45);
	// cout << "New Answer is : " << ans1 << endl;


	float ans3 = master<int, float, float>(2, 3.4);
	cout << "Master Answer is : " << ans3 << endl;
	return 0;
}