#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> &a,pair<int,int> &b){
  return a.first*b.second > b.first*a.second;
}
double FKmxprofit(int capacity, int values[], int weight[], int n){
  vector<pair<int,int> > v(n);
  for(int i=0;i<n;i++){
    v[i].first = values[i];
    v[i].second = weight[i];
  }

  sort(v.begin(),v.end(),cmp);
  double mxprofit = 0;
  int curr = 0;
  for(int i=0;i<n;i++){
    int currweight = v[i].second;

    if(curr+currweight <= capacity){
      mxprofit += v[i].first;
      curr = curr + currweight;
    }else{
      mxprofit += 1.0*v[i].first/v[i].second*(capacity - curr);
      curr = capacity;
      break;
    }
  }

  return mxprofit;
}

int main(){
  cout << "capacity of Knapsack\n";
  int capacity = 0;
  cin >> capacity;
  cout << "Enter no of weights given\n";
  int n;
  cin >> n;
  cout << "Enter the value and its weight given seperated by space\n";
  int values[n];
  int weight[n];
  for(int i=0;i<n;i++) cin >> values[i] >> weight[i];
  cout << FKmxprofit(capacity,values,weight,n);
  return 0;
}