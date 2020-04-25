#include<iostream>
#include<cstring>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	string s1,s2,s3="";
		cin>>s1>>s2;

		for(int i=0;i<s1.length();i++){
			if(s1[i]==s2[i]){
				s3.append("0");
			}
			else {
				s3.append("1");
			}
		}
		cout<<s3<<endl;
	}
	return 0;
} 

