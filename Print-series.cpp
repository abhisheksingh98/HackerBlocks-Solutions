#include<iostream>
using namespace std;
int main() {
	int n1, n2,sol;
	cin>>n1>>n2;
	for(int i=1;i<=n1;i++){
		sol = 3*i + 2;
		if(sol%n2!=0){
		cout<<sol<<endl;
		}
		else n1++;
	}
	return 0;
}