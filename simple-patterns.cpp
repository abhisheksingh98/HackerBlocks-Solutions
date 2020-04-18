//Pattern 1
// *
// **
// ***
// ****
// *****

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

// Pattern 2
// 1
// 1 2
// 3 4 5
// 6 7 8 9
// 10 11 12 13

#include<iostream>
using namespace std;

int main(){
    int n,val=1;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<val++<<" ";
        }
        cout<<endl;
    }
    return 0;
}