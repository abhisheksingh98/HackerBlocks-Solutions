#include<iostream>
using namespace std;

//First Method------- Complexity O(LogN)
int countBits(int n){
    int ans = 0;
    while(n>0){
        ans+=(n&1);
        n=n>>1;
    }
    return ans;
}

//Second Method - Better than first ---- Complexity in the worst case can be LogN
int countBitsFast(int n){
    int ans = 0;
    while(n>0){
        //the below line actually removes the last set bit
        n=n&(n-1);
        ans++;
    }
    return ans;
}

//Third Method using inbuilt function
//just use cout<<__builtin_popcount(n)

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<countBitsFast(n)<<endl;
    }
    return 0;
    
}