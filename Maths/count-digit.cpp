#include<iostream>
using namespace std;

int main(){
    int n, digit, count = 0;
    cin>>n;
    cin>>digit;
    while(n!=0){
        if(n%10==digit){
            count++;
        }
        n=n/10;
    }
    cout<<count;
}