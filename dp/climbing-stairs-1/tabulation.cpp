#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int climbStairs(int n){
   vector<int> dp(n+1,0);
  dp[0] =1;
  dp[1] = 1;
   for(int i=2;i<=n;i++){
       dp[i] = dp[i-1] + dp[i-2];
   }
   return dp[n];

}
int main(){
  // vector<int> arr = {10,15,20};
  // int n = arr.size();
  int n = 15;
  cout << climbStairs(n) ;
  return 0;
}