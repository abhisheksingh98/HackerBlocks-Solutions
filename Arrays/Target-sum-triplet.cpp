#include<iostream>
#include<algorithm>
using namespace std;

void sumTriplet(int a[], int n, int target){
	
	for(int i=0;i<n;i++){
	int left = i+1;
	int right = n-1;
		while(left<right){

			if(a[i]+a[left]+a[right]==target){
				cout<<a[i]<<", "<<a[left]<<" and "<<a[right]<<endl;
				left++;
				right--;
			}

			
			else if(a[i]+a[left]+a[right]<target){
				left++;
			}
			else if(a[i]+a[left]+a[right]>target){
				right--;
			}
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
	sumTriplet(a,n,target);
	return 0;
}