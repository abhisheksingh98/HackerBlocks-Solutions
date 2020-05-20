#include<iostream>
using namespace std;

bool sorted(int a[], int n){
	if(n==0 || n==1){
	return true;	
	}
	if(a[0]<a[1] && sorted(a, n-1) ){
	return true;	
	}
	else {

	return false;
	}
}
int main() {
	int a[10000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(sorted(a+1,n)){
		cout<<"true";
	}
	else cout<<"false";
	return 0;
}