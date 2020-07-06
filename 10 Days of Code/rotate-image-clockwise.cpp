#include<iostream>
using namespace std;

void display(int a[][1000],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}


// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16


void rotate(int a[][1000], int n){
	for(int row=0;row<n;row++){
		for(int col = 0;col<n;col++){
			swap(a[row][col], a[row][n-1-col]);

			
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<j){
			swap(a[i][j],a[j][i]);
		}
		}
	}

for(int row=0;row<n;row++){
	int startcol = 0;
	int endcol = n-1;
	while(startcol<endcol){
		swap(a[row][startcol],a[row][endcol]);
		startcol++;
		endcol--;
	}
	}
	
}



int main() {
	int a[1000][1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	rotate(a,n);
	display(a,n);
	return 0;
}