#include<iostream>
using namespace std;
void print1toN(int counter, int n){
  if(counter > n){
    return;
  }
  cout << counter << " ";
  print1toN(counter+1,n);
}
int main(){
  int n;
  cout << n;
  print1toN(1,n);
  return 0;
}