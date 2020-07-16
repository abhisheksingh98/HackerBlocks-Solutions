#include<iostream>
#include<algorithm>
using namespace std;

void targetSumPair(int a[], int n, int target){
	int left = 0;
	int right = n-1;

	while(left<right){
		if(a[left]+a[right]>target){
			right--;
		}
		else if(a[left]+a[right]<target){
			left++;
		}
		
		else {
			cout<<a[left]<<" and "<<a[right]<<endl;
			left++;
			right--;
		}
	}
}

int main() {
	int a[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	sort(a,a+n);
	int target;
	cin>>target;
	targetSumPair(a,n,target);
	return 0;
}