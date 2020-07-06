#include<iostream>
using namespace std;

int gcd(int a, int b){
    //Using Euclid's Algo let's say a = 20 b= 12 then after doing gcd(a,b) i.e; a%b we get remainder 8 (b') and now the divisor becomes 12 (a'). So we can say that gcd(a' , b') is nothing but gcd(b,a%b).
    return b==0 ? a : gcd(b,a%b);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}