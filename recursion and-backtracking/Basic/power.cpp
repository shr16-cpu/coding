#include<iostream>
using namespace std;
int getPower(int a,int b){
  if(b==0){
    return 1;
  }
  return a * getPower(a,b-1);
}
int main(){
  int a,b;
  cin >> a;
  cin >> b;
  cout << getPower(a,b);
  return 0;
}