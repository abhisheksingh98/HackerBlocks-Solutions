#include<iostream>
#include<climits>
using namespace std;
int main() {
	int n;
	int a[n];
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int largest = INT_MIN;
	int smallest = INT_MAX;
	for(int i=0;i<n;i++){
		largest = max(largest,a[i]);
	}
	cout<<largest;
	return 0;
}