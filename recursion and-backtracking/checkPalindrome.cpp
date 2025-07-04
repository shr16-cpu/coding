#include<iostream>
using namespace std;
bool findPalindrome(int *arr , int n, int i){
  if(arr[i]!=arr[n-i-1]){
    return false;
  }
  if(i>=n/2){
    return true;
  }
  return findPalindrome(&arr,n,i+1);
}
int main(){
  int arr[]= {1,2,3,4,5,6};
  int n = 6;
  cout << findPalindrome(arr,n,0);
  return 0;
}