#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool isSafe(int row,int col,vector<string> &board, int n){
  for(int i=0;i<row;i++){
    if(board[i][col] == 'Q') return false;
  }

  for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
    if(board[i][j] == 'Q') return false;
  }
  for (int i = row - 1,j = col + 1; i >=0 && j < n; i--, j++) {
        if (board[i][j] == 'Q') return false;
    }

    return true;
}
void solve(int row,vector<string> &board,vector<vector<string>> &ans,int n){
  if(row==n){
    ans.push_back(board);
    return;
  }
  for(int col = 0;col<n;col++){
    if(isSafe(row,col,board,n)){
      board[row][col] = 'Q';
      solve(row+1,board,ans,n);
      board[row][col] = '.';
    }
  }
}
vector<vector<string>> solveQueen(int n){
  vector<vector<string>> ans;
  vector<string> board(n, string(n,'.'));
  solve(0,board,ans,n);
  return ans;

}
int main(){
    int n = 5;
  vector<vector<string>> solutions = solveQueen(n);
  cout << "Total Solutions " << solutions.size() ;
  for(int i=0;i<solutions.size();i++){
    for(string row : solutions[i]){
      cout << row << "\n";
    }
    cout << endl;
  }
  return 0;
}