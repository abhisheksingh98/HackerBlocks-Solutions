#include<iostream>
using namespace std;

#define ll long long int

bool isValidConfig(ll books[], ll n, ll m, ll mid){
	int students = 1;
	ll currentPages = 0;
	for(int i=0;i<n;i++){
		if(currentPages+books[i]>mid){
			currentPages = books[i];
			students++;
			if(students>m){
				return false;
			}
		}
		else {
			currentPages+=books[i];
		}
	}
	return true;
}

ll binarySearchBooks(ll books[], ll n, ll m){
	ll totalPages = 0;
	ll s=0,e=0;
	for(int i=0;i<n;i++){
		totalPages+=books[i];
		s=max(s,books[i]);
	}
	e=totalPages;
	int finalAns = s;
	while(s<=e){
		ll mid = (s+e)/2;
		if(isValidConfig(books,n,m,mid)){
			finalAns = mid;
			e=mid-1;
		}
		else {
			s=mid+1;
		}
	}
	return finalAns;
}

int main() {
	ll m,n,t;
	cin>>t;
	while(t--){
	cin>>n>>m;
	ll books[n];
	for(int i=0;i<n;i++){
		cin>>books[i];
	}
	cout<<binarySearchBooks(books,n,m)<<endl;
	}
	return 0;
}