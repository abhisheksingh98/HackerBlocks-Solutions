#include<iostream>
using namespace std;

int upperBound(int a[], int n, int key){
	int start = 0;
	int end = n-1;
	int ans = -1;

	while(start<=end){
		int mid = (start+end)/2;
		if(a[mid]==key){
			ans = mid;
			start=mid+1;
		}
		else if(a[mid]>key){
			end = mid -1;
		}
		else {
			start = mid+1;
		}
	}
	return ans;
}

int lowerBound(int a[], int n, int key){
	int start = 0;
	int end = n-1;
	int ans = -1;
	while(start<=end){
		int mid = (start+end)/2;
		if(a[mid]==key){
			ans = mid;
			end = mid-1;
		}
		else if(a[mid]>key){
			end=mid-1;
		}
		else {
			start = mid+1;
		}
	}
	return ans;
}

int main() {
	int a[100000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int q,x;
	cin>>q;
	while(q--){
		cin>>x;
		cout<<lowerBound(a,n,x)<<" "<<upperBound(a,n,x)<<endl;
	}
	return 0;
}