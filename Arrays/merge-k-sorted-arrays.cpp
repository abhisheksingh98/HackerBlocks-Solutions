#include<bits/stdc++.h>
using namespace std;

// void kSortedArrays(int a[1000][1000], int k, int n){
	
// }
int main() {
	int n,k;
	cin>>k>>n;
	int a[k][n];

	for(int i=0;i<k;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int pointer[k];
	for(int i=0;i<k;i++) pointer[i] = 0;

	for(int i=0;i<n*k;i++){
		int min_index = 0;
		int value = INT_MAX;
		for(int j=0;j<k;j++){
			if(a[j][pointer[j]]<value && pointer[j]<=n-1){
				value = a[j][pointer[j]];
				min_index = j;
			}
		}
		cout<<value<<" ";
		pointer[min_index]++;
	}
	cout<<endl;
	return 0;
}