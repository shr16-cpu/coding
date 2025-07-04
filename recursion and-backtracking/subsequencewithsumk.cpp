#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findSeq(int arr[],vector<int> &ans,int n,int ind,int sum,int k){
    if(ind == n){
        if(sum == k){
        for(auto it:ans){
            cout << it << " ";
           
        } 
        }
        cout << endl;
     
        return;
    }

    sum = sum + arr[ind];
    ans.push_back(arr[ind]);
    findSeq(arr,ans,n,ind+1,sum,k);
    ans.pop_back();
    sum = sum - arr[ind];
    findSeq(arr,ans,n,ind+1,sum,k);
}
int main(){
    int arr[] = {3,1,2};
    vector<int> ans;
    int n = 3;
    int sum = 0;
    findSeq(arr,ans,n,0,sum,3);
    return 0;
}