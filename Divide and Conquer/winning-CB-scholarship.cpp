#include<iostream>
using namespace std;

bool CanWeGive(long n, long m, long x, long y, long a){
    // if(x*a <= m+y*(n-a)){
	// 	return true;
	// }
	// else return false;
    return (x*a <= m+y*(n-a));
}

long WinningCBscholarship(long n, long m, long x, long y){
    long start = 0;
    long end =n;

    long ans = 0;
    while(start<=end){
        long mid = (start+end)/2;
        if(CanWeGive(n,m,x,y,mid)){
            ans = mid;
            start = mid+1;
        }
        else {
            end = mid -1;
        }
    }
    return ans;
}

int main(){
    long n,m,x,y;
    cin>>n>>m>>x>>y;
    cout<<WinningCBscholarship(n,m,x,y)<<endl;
    return 0;
}