#include<iostream>
using namespace std;
int findSum(int n){
  if(n==0){
    return 0;
  }
  return n + findSum(n-1);
}
int main(){
  int n;
  cin >> n;
  cout << findSum(n);
  return 0;
}