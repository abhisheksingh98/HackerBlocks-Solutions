#include<iostream>
using namespace std;

string replacePi(string str, int idx)
{
	//base case
	// if(str.length()==0)
	// {
	// 	return str;
	// }
	if(idx+1 >= str.length()){
		return str;
	}

	//check for pi
	if(str[idx] == 'p' && str[idx+1] =='i' && idx+1<str.length()){
		str =  str.substr(0,idx) + "3.14" + str.substr(idx+2);
	}
		string recursionResult = replacePi(str,idx+1);
		return recursionResult;
}

int main() {
	int n;
	string str;
	cin>>n;
	while(n--){
		cin>>str;
		cout<<replacePi(str,0)<<endl;
	}
	return 0;
}