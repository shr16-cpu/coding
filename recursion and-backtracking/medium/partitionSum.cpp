#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool sumPartition(int index,vector<int> &arr,int target){
  if(target == 0){
    return true;
  }
  for(int i = index;i<arr.size();i++){
    if(sumPartition(i+1,arr,target-arr[i])){
      return true;
    }
  }
  return false;

}
int main(){
  vector<int> arr = {1, 5, 12, 5};
  int sum  = 0;
  for(int i=0;i<arr.size();i++){
    sum+=arr[i];
  }
  if(sum & 1){
      cout << "Its not possible";
    return 0;
  }else{
    if(sumPartition(0,arr,sum/2) == true){
      cout << "Its possible";
    }else{
      cout << "Its not possible";
    }
  }
  return 0;
}

