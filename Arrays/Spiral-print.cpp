#include<iostream>
using namespace std;

void spiralprint(int a[][10], int row, int col){
	int startrow = 0;
	int endrow = row-1;
	int startcol = 0;
	int endcol = col-1;
	int noOfElementsPrinted = 0;

	while(noOfElementsPrinted<row*col){
		//left to right
		for(int i=startcol;i<=endcol;i++){
			cout<<a[startrow][i]<<", ";
			noOfElementsPrinted++;
		}
		startrow++;

	if(noOfElementsPrinted==row*col){
			break;
		}

		//top to down
		for(int i=startrow;i<=endrow;i++){
			cout<<a[i][endcol]<<", ";
			noOfElementsPrinted++;
		}
		endcol--;

		if(noOfElementsPrinted==row*col){
			break;
		}
		//right to left
		for(int i=endcol;i>=startcol;i--){
			cout<<a[endrow][i]<<", ";
			noOfElementsPrinted++;
		}
		endrow--;

		if(noOfElementsPrinted==row*col){
			break;
		}
		//bottom to top

		for(int i=endrow;i>=startrow;i--){
			cout<<a[i][startcol]<<", ";
			noOfElementsPrinted++;
		}
		startcol++;
	}
 	if(noOfElementsPrinted==row*col){
			cout<<"END";
			
		}
}

int main() {
	int a[10][10], row, col;
	cin>>row>>col;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>a[i][j];
		}
	}
	spiralprint(a,row,col);
	return 0;
}