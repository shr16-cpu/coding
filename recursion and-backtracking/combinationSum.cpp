#include<iostream>
using namespace std;
void findCombination(int arr[], vector<vector<int>> &ans, int target ,int n,int ind,vector<int> ds){
    if(ind == n){
       if(target == 0){
        ans.push_back(ds);
       }
       return;
    }
    if(arr[ind]<=target){
    ds.push_back(arr[i]);
    findCombination(arr,ans,target-arr[i],n,ind, ds);
    ds.pop_back();
    }

    findCombination(arr,ans,target,n,ind+1,ds);


}
int main(){
  int arr[] = {2,3,6,7};
  int target = 7;
  vector<vector<int>> ans;
  vector<int> ds;
  findCombination(arr,ans,target,4,0,ds);
  for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size(); j++){
      cout << ans[i][j] << " ";
    }
  }
  return 0;
}