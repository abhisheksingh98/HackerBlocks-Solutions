#include<iostream>
using namespace std;

//Sieve Approach - Generate an array containing prime numbers
void primeSieve(int a[]){

	//first mark all odd numbers prime
	for(int i=3;i<1000000;i+=2){
		a[i]=1;
	}

	//Sieve
	for(long long i=3;i<1000000;i+=2){
		//if the current number is not marked (it is prime)
		if(a[i]==1){
			//mark all the multiples of i as not prime
			for(long long j=i*i;j<1000000;j+=i){
				a[j]=0;
			}
		}
	}

	//special case
	a[2] =1;
	a[1]=a[0] = 0;
}

int main(){
    int n;
    cin>>n;

    int a[1000000] = {0};
    primeSieve(a);

    //lets print primes upto range n
    for(int i=0;i<=n;i++){
        if(a[i]==1){
            cout<<i<<", ";
        }
    }
    return 0;
}