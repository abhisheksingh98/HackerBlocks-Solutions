#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
			int sum = 0;
		for(int i=a;i<=b;i++){
			 sum = sum +  __builtin_popcount(i);
		}
			cout<<sum<<endl;
	}
	return 0;
}