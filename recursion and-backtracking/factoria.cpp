#include<iostream>
using namespace std;
int factorial(int n){
  if(n==1){
    return 1;
  }
  return n * factorial(n-1);
}
int main(){
  cout << "Enter the no";
  int n;
  cin >> n;
  int fact = factorial(n);
  cout <<fact;
  return 0;
}