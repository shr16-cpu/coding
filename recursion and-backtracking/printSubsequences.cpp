#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findSeq(int arr[],vector<int> ans,int n,int ind){
    if(ind == n){
        for(auto it:ans){
            cout << it << " ";
           
           
        }
        cout << endl;
        if(ans.size() == 0){
            cout << "{}" ;
        }
        return;
    }

    ans.push_back(arr[ind]);
    findSeq(arr,ans,n,ind+1);
    ans.pop_back();
    findSeq(arr,ans,n,ind+1);
}
int main(){
    int arr[] = {3,1,2};
    vector<int> ans;
    int n = 3;
    findSeq(arr,ans,n,0);
    return 0;
}