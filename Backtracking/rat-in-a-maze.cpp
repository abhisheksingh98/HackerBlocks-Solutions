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