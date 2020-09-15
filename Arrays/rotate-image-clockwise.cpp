#include<iostream>
using namespace std;

void display(int a[][1000], int n){

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

}

void rotateClockwise(int a[][1000], int n){
	for(int col=0;col<n;col++){
		int start_row = 0;
		int end_row = n-1;
		while(start_col<end_col){
			swap(a[start_row][col],a[end_row][col]);
			start_row++;
			end_row--;
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<j){
				swap(a[i][j],a[j][i]);
			}
		}
	}

}
int main() {
	int n;
	int a[1000][1000];
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		cin>>a[i][j];
		}
	}
	rotateClockwise(a,n);
	display(a,n);
	return 0;
}