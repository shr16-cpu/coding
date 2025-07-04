#include<iostream>
using namespace std;
int fibo(int n){
  if(n==0 || n==1){
    return n;
  }
  int fib = fibo(n-1) + fibo(n-2);
  cout << fib << " ";
  cout << endl;
  return fib;
}
int main(){
  int n;
  cout << "Enter the fibonacci";
  cin >> n;
  cout << "heheh" <<  fibo(n) << endl;
  return 0;

}