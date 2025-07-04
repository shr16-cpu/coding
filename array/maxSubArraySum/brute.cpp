#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findSubArray(int arr[],int n){
  int maxSum = INT_MIN;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      int sum = 0;
      for(int k=i;k<=j;k++){
         sum = sum + arr[k];
      }
      if(sum > maxSum){
        maxSum = sum;
      }
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

//Example :Enter the array length8
//-2 -3 4 -1 -2 1 5 -3
//7

// Time Complexity : O(N*3)
// Space Complexity : O(1)