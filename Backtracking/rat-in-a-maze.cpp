#include<iostream>
using namespace std;

bool ratinamaze(char maze[1001][1001], int sol[][1001], int i, int j, int m, int n){
	if(i==m && j==n){
		sol[m][n] = 1;

		for(int i=0;i<=m;i++){
			for(int j=0;j<=n;j++){
				cout<<sol[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return true;
	}

	if(i>m ||j>n){
		return false;
	}

	if(maze[i][j]=='X'){
		return false;
	}
	sol[i][j] = 1;

	bool rightsuccess = ratinamaze(maze, sol, i,j+1,m,n);
	bool downsuccess = ratinamaze(maze,sol,i+1,j,m,n);

	sol[i][j] = 0;
	if(rightsuccess || downsuccess){
		return true;
	}
	return false;
}

int main() {
	char maze[1001][1001];
	int sol[1001][1001] = {0};
	int m,n;
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>maze[i][j];
		}
	}

	bool ans = ratinamaze(maze,sol,0,0,m-1,n-1);
	if(ans==false){
		cout<<"-1";
	}


	return 0;
}

//The above code is giving TLE
//Below is a little more optimized solution


#include<iostream>
using namespace std;

bool ratinamaze(char maze[][1000], int sol[][1000], int sr, int sc, int er, int ec){
	//base case
	if(sr==er && sc==ec){
		sol[er][ec] = 1;

		//printing path
		for(int i=0;i<=er;i++){
			for(int j=0;j<=ec;j++){
				cout<<sol[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return true;
	}
	if(sr>er || sc>ec){
		return false;
	}
	if(maze[sr][sc]=='X'){
		return false;
	}

	sol[sr][sc] = 1;
	bool rightSuccess = ratinamaze(maze,sol,sr,sc+1,er,ec);

	if(rightSuccess){
		return true;
	}

	bool downSuccess = ratinamaze(maze,sol,sr+1,sc,er,ec);
	if(downSuccess){
		return true;
	}

	sol[sr][sc] = 0;
	return false;
}

int main() {
	int row,col;
	cin>>row>>col;
	char maze[1000][1000];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>maze[i][j];
		}
	}

	// if((maze[0][0]=='X')||(maze[row-1][col-1]=='X'))
	// {
	// 	cout<<"-1";
	// 	return 0;
	// }
	
	int sol[1000][1000] = {0};

	bool a = ratinamaze(maze,sol,0,0,row-1,col-1);
	if(a==false){
		cout<<"-1";
	}
	return 0;
}