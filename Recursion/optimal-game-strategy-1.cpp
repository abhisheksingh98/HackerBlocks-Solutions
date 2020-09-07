#include<iostream>
using namespace std;

int maxProfit(int a[], int s, int e){
	if(s>e){
		return 0;

		int op1 = a[s] + min(maxProfit(a,s+2,e),maxProfit(a,s+1,e-1));
		int op2 = a[e] + min(maxProfit(a,s+1,e-1),maxProfit(a,s,e-2));

	}
		return max(op1,op2);
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<maxProfit(a,0,n-1);
	return 0;
}