#include<iostream>
using namespace std;

void waveprint(int a[][1000], int m, int n){
	for(int col=0;col<n;col++){
		if(col%2==0){
			//top down
			for(int row=0;row<m;row++){
				cout<<a[row][col]<<", ";
			}
		}
		else {
			for(int row=m-1;row>=0;row--){
				cout<<a[row][col]<<", ";
			}
		}
		
	}
			cout<<"END";
}
int main() {
	int m,n;
	cin>>m>>n;
	int a[1000][1000];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	waveprint(a,m,n);
	return 0;
}