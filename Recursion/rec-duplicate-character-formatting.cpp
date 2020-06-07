#include<iostream>
using namespace std;

string addStar(string str){
	//base case
	if(str.length()==0){
		return str;
	}

	char ch = str[0];
	string ros = str.substr(1);

	string recursionresult = addStar(ros);

	if(ch==recursionresult[0]){
		return ch + (string)"*" + recursionresult;
	} 
	else {
		return ch + recursionresult;
	}
}
int main() {
	string str;
	cin>>str;
	cout<<addStar(str);
	return 0;
}