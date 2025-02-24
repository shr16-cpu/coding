//Find factorial using recursion

#include<iostream>
using namespace std;
int printCount(int n){
    if(n==0){
        return 0;
    }
    
    cout << n << endl;
    return printCount(n-1);
    
}
int main(){
    int n;
    cin >> n;
    printCount(n);
    return 0;
   
}