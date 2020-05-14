#include<iostream>
using namespace std;

int gcd(int a,int b){
	return b==0?a:gcd(b,a%b);
}
int main() {
	int n1,n2,lcm,gc;
	cin>>n1>>n2;
	gc = gcd(n1,n2);
	lcm = (n1*n2)/gc;
	cout<<lcm<<endl;

	return 0;
}