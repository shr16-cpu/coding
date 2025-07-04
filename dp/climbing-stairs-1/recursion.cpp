#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int climbStairs(int n){
   vector<int> dp(n+1,0);
  //  if(index == 0){
  //    return 1;
  //  }
  //  if(index < 0){
  //   return 0;
  //  }
  for(int i=1;i<=n;i++){
    if(i-2>=0){
      dp[i] =dp[i-1] + dp[i-2];
    }
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