#include<bits/stdc++.h>
using namespace std;

bool isValid(int arr[], int n, int cows, int distanceLimit){

	int prevCowPosition = arr[0];
	int cowsPlacedUptoThisPoint = 1;

	for(int i=1;i<n;i++){
		int currentCowPosition = arr[i];

		int gapBetweenCows = currentCowPosition - prevCowPosition;
		if(gapBetweenCows>=distanceLimit){
			cowsPlacedUptoThisPoint++;
			prevCowPosition = arr[i];
			if(cowsPlacedUptoThisPoint==cows){
				return true;
			}
		}
	}
		return false;
}

int aggressiveCows(int arr[], int n, int cows){
	sort(arr, arr+n);

	int minDist = 1;
	int maxDist = arr[n-1] - arr[0];

	int start = minDist;
	int end = maxDist;
	int ans = 1;
	while(start<=end){
		int mid = (start+end)/2;

		if(isValid(arr,n,cows,mid)){
			ans = mid;
			start = mid+1;
		}
		else {
			end = mid-1;
		}
	}
	return ans;
}
int main() {
	int arr[100000];
	int n,c;
	cin>>n>>c;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<aggressiveCows(arr,n,c);
	return 0;
}