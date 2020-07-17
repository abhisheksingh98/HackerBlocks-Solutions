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

int main() {
	int a[1000000] = {0};
	primeSieve(a);

	int cSum[1000000] = {0};
	//precompute the primes upto an index i
	for(int i=0;i<1000000;i++){
		cSum[i] = cSum[i-1] + a[i];
	}
	int n;
	cin>>n;
	while(n--){
		int a,b;
		cin>>a>>b;
		cout<<cSum[b] - cSum[a-1]<<endl;
	}
	return 0;
}