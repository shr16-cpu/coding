#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int climbStairs(int index){
   if(index == 0){
     return 1;
   }
   if(index < 0){
    return 0;
   }
   return climbStairs(n-1) + climbStairs(n-2);

}
int main(){
  // vector<int> arr = {10,15,20};
  // int n = arr.size();
  int n = 15;
  cout << climbStairs(n) ;
  return 0;
}


//Time complexity O(n)
//Space Complexity O(n)