#include<iostream>
using namespace std;

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void printKeyPad(string str, string ans){
	if(str.length()==0){
		cout<<ans<<endl;
		return;
	}

	char ch = str[0];
	string ros = str.substr(1);

	int idx = ch - '0';
	string key = table[idx];

	for(int i=0;i<key.length();i++){
		printKeyPad(ros,ans+key[i]);
	}
}
int main() {
	string str;
	cin>>str;
	printKeyPad(str,"");
	return 0;
}