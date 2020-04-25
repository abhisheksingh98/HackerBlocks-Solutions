#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int k=n;

	for(int row=1;row<=n;row++){
		// int val=1;
		for(int i=1;i<=k;i++){
			cout<<i<<" ";
			// cout<<val<<" ";
			// val++;
		}
		k--;

		for(int col=1;col<=row-1;col++){
			cout<<"*"<<" ";
		}
		if(row>=3){
			for(int col=1;col<=row-2;col++){
				cout<<"*"<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}