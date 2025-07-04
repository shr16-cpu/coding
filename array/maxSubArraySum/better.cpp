#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findSubArray(int arr[],int n){
  int maxSum = INT_MIN;
  for(int i=0;i<n;i++){
       int sum = 0;
    for(int j=i;j<n;j++){
         sum = sum + arr[j];
         maxSum = max(sum,maxSum);
      }
  }
  cout <<maxSum;
}
int main(){
  int n;
  cout << "Enter the array length";
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  findSubArray(arr,n);
  return 0;
}