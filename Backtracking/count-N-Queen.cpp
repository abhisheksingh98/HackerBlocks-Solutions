#include<iostream>
using namespace std;

bool isSafe(int board[][11], int row, int col, int n){
	for(int i=row;i>=0;i--){
		if(board[i][col]==1){
			return false;
		}
	}

	//Left Diagonals
	int x = row;
	int y = col;
	
	while(x>=0 && y>=0){
		if(board[x][y]==1){
			return false;
		}
		x--;
		y--;
	}

	//Loop has ended

	//Right Diagonals
	x=row;
	y=col;

	while(x>=0 && y<n){
		if(board[x][y]==1){
			return false;
		}
		x--;
		y++;
	}
	return true;
}

int countNQueen(int board[][11],int row, int n){
	//base case
	if(row==n){
		return 1;
	}
	int count = 0;
	for(int col=0;col<n;col++){
		if(isSafe(board,row,col,n)){
			board[row][col] = 1; //my work

			count+=countNQueen(board,row+1,n);
			board[row][col] = 0; //backtracking
		}
	}
	return count;
}

int main() {
	int n;
	cin>>n;
	int board[11][11]={0};
	
	cout<<countNQueen(board,0,n);

	return 0;
}