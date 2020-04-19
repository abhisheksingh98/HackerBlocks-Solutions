#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;

	for(int row=1;row<=n;row++){

	for(int spaces = 1;spaces<=n-row;spaces++){
		cout<<" "<<"\t";
	}
	for(int inc = row;inc<=2*row-1;inc++){
		cout<<inc<<"\t";
	}
	for(int dec = 2*row-2;dec>=row;dec--){
		cout<<dec<<"\t";
	}
	cout<<endl;

	}


	return 0;
}