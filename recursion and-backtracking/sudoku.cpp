#include<iostream>
using namespace std;
const int N=9;
void printBoard(int arr[N][N]){
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}
bool isSafe(int c, int row,int col, int board[N][N]){
  for(int i=0;i<N;i++){
    if(board[row][i]==c){
      return false;
    }
  }
  for(int i=0;i<N;i++){
    if(board[i][col]==c){
      return false;
    }
  }
  int startRow = row - row%3;
  int startCol = col - col%3;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(board[startRow+i][startCol+j] == c){
        return false;
      }
    }
  }
  return true;
}
bool solve(int board[N][N]){
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(board[i][j]==0){
        for(int c=1;c<10;c++){
           if(isSafe(c,i,j,board)){
            board[i][j]=c;
            if(solve(board)){
              return true;
            }else{
              board[i][j] = 0;
            }
           }
           
        }
        return false;
      }
    }
  }
  return true;
}
int main(){
  int board[N][N] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };
  cout << "\n Original Sudoku";
  if(solve(board)==true){
    printBoard(board);
  }else{
    cout << "No Solution";
  }
  return 0;
}