#include<iostream>
using namespace std;
int main() 
{
	char ch;
	cin>>ch;
	if(ch<=90 && ch>=65)
	{
	cout<<"U";
	}
	else if(ch<=122 && ch>=97)
	{
	cout<<"L";
	}
	else cout<<"I";
	return 0;
}