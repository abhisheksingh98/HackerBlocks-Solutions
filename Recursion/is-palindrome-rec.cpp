#include<iostream>
using namespace std;

bool isPalindrome( int arr[ ] ,int i, int j) {

    if(i >= j) {
       return true;
    }
    if(arr[i]!=arr[j]){
        return false;
    }
    else {
        return isPalindrome(arr,i+1,j-1) ;
    }
}

int main(){
    int n ;         
    cin >> n;   
    int a[n];       
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    cout<<boolalpha<<isPalindrome(a,0,n-1)<<endl;       
	// if(isPalindrome){
	// 	cout<<"true";
	// }
	// else cout<<"false";
     return 0;
}