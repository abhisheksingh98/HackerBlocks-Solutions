#include<iostream>
using namespace std;

string removeDuplicate(string str){
	//base case
	if(str.length()==0){
		return str;
	}

	char ch = str[0];
	string ros = str.substr(1);
	string recursionResult = removeDuplicate(ros);

	if(ch==recursionResult[0]){
		return recursionResult;
	}
	else {
		return ch + recursionResult;
	}
}
int main() {
	string str;
	cin>>str;
	cout<<removeDuplicate(str);
	return 0;
}