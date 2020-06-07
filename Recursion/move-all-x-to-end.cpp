#include<iostream>
using namespace std;

string moveToEnd(string str){
	if(str.length()==0){
		return str;
	}
	char ch = str[0];
	string ros = str.substr(1);
	string recursionResult = moveToEnd(ros);
	if(ch=='x'){
		return recursionResult + ch;
	}
	else return ch+recursionResult;
}
int main() {
	string str;
	cin>>str;
	cout<<moveToEnd(str);
	return 0;
}