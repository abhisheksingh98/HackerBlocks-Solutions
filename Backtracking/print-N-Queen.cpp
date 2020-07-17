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

bool NQueens(int board[][11], int row, int n) {
	//BASE CASE
	if (row == n) {
		//PRINT

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {

				if (board[i][j]) {
					cout << "Q ";
				} else {
					cout << "_ ";
				}
			}
			cout << endl;
		}

		cout << "********************************" << endl;

		return true;// for printing convert to -> return false;
	}


	//RECURSIVE CASE
	for (int col = 0; col < n; col++) {

		// row = 1
		// col = 2->3

		if (isSafe(board, row, col, n)) {

			board[row][col] = 1; // my work

			bool rest_of_the_queens = NQueens(board, row + 1, n); // recursion

			// if (rest_of_the_queens) { // if orientation is correct
			// 	return true; 			// return true
			// }

			// if we here that means the subproblem was false
			board[row][col] = 0; // remove your current queen !BACKTRAKCING!
		}

	}

	return false;
}

int main() {
	int n;
	cin>>n;
	int board[11][11]={0};
	
	cout<<NQueens(board,0,n);

	return 0;
}