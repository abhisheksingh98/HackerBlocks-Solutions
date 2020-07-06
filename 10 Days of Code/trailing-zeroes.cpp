#include<iostream>
using namespace std;

int main(){
    long long int n;
    int p = 5,ans=0;
    cin>>n;
    while((n/p)>0){
        ans += (n/p);
        p=p*5;
    }
    cout<<ans;
    return 0;
}