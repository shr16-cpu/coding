#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
 for(int i=0;i<n;i++){
  cout << arr[i];
}
}
void dutchNational(int arr[],int n){
  int low = 0;
  int high = n-1;
  int mid= 0;
  while(mid<=high){
    if(arr[mid]==0){
      swap(arr[low],arr[mid]);
      low++;
      mid++;
    }else if(arr[mid]==1){
      mid++;
    }else{
      swap(arr[mid],arr[high]);
      high--;
    }
  }
}
int main(){
  int arr[20];
  int n;
  cout << "Enter the no to the array";
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  printArray(arr,n);
  cout << "\n";
  dutchNational(arr,n);
   cout << "\n";
  printArray(arr,n);
  return 0;
}


//Time complexity O(N)
//space complexity O(1)
