#include<iostream>

using namespace std;

int fib(int n){
  if(n<=2){
    return max(0,n-1);
  }
  return fib(n-1)+fib(n-2);
}

int main(){
  int n = 5;
  cin >> n;
  for(int i=0; i<n; i++){
    cout << fib(i+1) << " ";
  }
  cout << endl;
  return 0;
}
