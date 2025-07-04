#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getCoins(vector<int> coins, int amount,int n,int index){
    if(index == n || amount ==0){
      return 0;
    }
    if(index<0){
      return INT_MAX;
    }
    for(int i=0;i<coins.size();i++){
      if(amount-coins[i]>=0){
       int take = getCoins(coins,amount-coins[i],n,index);
      }
       int notTake = getCoins(coins,amount,n,index+1);
       return 1+min(take,notTake);

    }
}
int main(){
  vector<int> coins = { 1,2,5};
  int amount = 11;
  int n = coins.size();
  getCoins(coins,amount,n-1,0)
  return 0;
}