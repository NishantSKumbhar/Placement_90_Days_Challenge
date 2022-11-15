#include <bits/stdc++.h>

using namespace std;

int dp[1000][1000];

int knapSack(int W, int wt[], int val[], int n) { 
    if (n == 0 || W == 0) 
        return dp[n][W] = 0; 
    if(dp[n][W] != -1){
        return dp[n][W];
    }
    if (wt[n-1] > W) 
        return dp[n][W] = knapSack(W, wt, val, n - 1); 

    else
        return dp[n][W] = max(val[n-1] + knapSack(W - wt[n-1],  wt, val, n - 1),knapSack(W, wt, val, n - 1)); 
} 
    

int main(){

    memset(dp,-1,sizeof(dp));
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

    cout<<knapSack(capacity, weight, values, n);
}