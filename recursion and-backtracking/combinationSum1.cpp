#include<iostream>
using namespace std;
void combinationSum(vector<int> &arr,vector<vector<int>> &result,vector<int> &ds,int target,index){
  if(index==arr.size()){
   if(target == 0){
    result.push_back(ds);
    return;
   }
  }
   if(arr[i]>=target ){
    ds.push_back(arr[i]);
    combinationSum(arr,result,ds,target-arr[i],index);
    ds.pop_back();
   }
   combinationSum(arr,result,target,index+1);
}
int main(){
  vector<int> arr = {2,2,3};
  int target = 7;
  vector<vector<int>> result;
  vector<int> ds;
  combinationSum(arr,result,ds,target,0);
  for( auto it: result){
    for(auto ind: it){
      cout << ind << endl;
    }
  }
  return 0;
}