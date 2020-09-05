#include<iostream>
using namespace std;

void PivotElement(int a[], int s, int e){
	
	while(s<=e){
	int mid= (s+e)/2;
	if(a[mid]>a[mid+1]){
		cout<<mid<<endl;
		break;
	}
	if(mid>s && a[mid]<a[mid-1]){
		cout<<mid-1<<endl;
		break;
	}
	if(a[s]>=a[mid]){
		e=mid-1;
	}
	else {
		s=mid+1;
	}
}
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	PivotElement(a,0,n-1);
	return 0;
}