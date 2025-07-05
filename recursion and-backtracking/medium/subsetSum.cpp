#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void generateSum(int start,vector<int> arr, vector<int> &ans,int sum){
   ans.push_back(sum);
   for(int i = start;i<arr.size();i++){
    generateSum(i+1,arr,ans,sum+arr[i]);
   }
}
int main(){
  vector<int> arr = {1,2,3};
  vector<int> ans;
  vector<int> path;
  generateSum(0,arr,ans,0);
  for(auto it : ans){
    cout << it << " ";
  }
  return 0;
}