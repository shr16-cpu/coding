#include<iostream>
using namespace std;
void reverseArray(int i , int *arr,int n){
  if(i==n/2){
    return;
  }
  swap(arr[i],arr[n-i-1]);
  reverseArray(i+1,arr,n);
}
int main(){
  int arr[] = {1,2,3,4,5,6};
  int n = 6;
  reverseArray(0 , arr ,n);
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  return 0;
}