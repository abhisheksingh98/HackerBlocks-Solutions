#include<iostream>
using namespace std;
int main() {
char ch1;
cin>>ch1;
int ch;
ch=int(ch1);
if(ch<=90 && ch>=65){
cout<<"UPPERCASE";
}
else if(ch<=122 && ch>=97){
cout<<"lowercase";
}
else{
cout<<"Invalid";
}
return 0;
}