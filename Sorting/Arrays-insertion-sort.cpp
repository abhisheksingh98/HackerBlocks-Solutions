#include<iostream>
using namespace std;
int main() {
	int a[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int divider = 1;
	while(divider<n){
		for(int i=divider;i>0;i--){
			if(a[i]<a[i-1]){
				swap(a[i], a[i-1]);
			}
			else {
				break;
			}
		}
			divider++;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}