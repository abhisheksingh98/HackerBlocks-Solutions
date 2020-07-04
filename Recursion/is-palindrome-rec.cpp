#include<iostream>
using namespace std;

bool isPalindrome( int arr[ ] ,int i, int j) {

    if(i >= j) {
          //Check if i>=j 
        //In case of odd elements , i would become equal to j at the middle element and we can stop our search there
        //In case of even elements , i would eventually become 1 more than j and if array was palindromic till here , we need not check further and can return true
       return true;
    }
    if(arr[i]!=arr[j]){
        //Return false if ith and jth integer don't match

        return false;
    }
    else {
         //Otherwise check whether the remaining array is palindromic or not

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