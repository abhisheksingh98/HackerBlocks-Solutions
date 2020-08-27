#include<iostream>
using namespace std;

void merge(long long int arr[], long long int start, long long int end){
    long long int mid = (start+end)/2;
    long long int i = start;
    long long int j = mid+1;
    long long int temp[end - start + 1];
    long long int k = 0;

    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }
        else {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while(j<=end){
        temp[k] = arr[j];
        j++;
        k++;
    }
    while(i<=mid){
        temp[k] = arr[i];
        i++;
        k++;
    }

    long long int pos = 0;
    for(long long int x = start;x<=end;x++){
        arr[x] = temp[pos];
        pos++;
    }

}

void mergeSort(long long int arr[], long long int start, long long int end){
    if(start==end){
        return;
    }
    long long int mid = (start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,start,end);
}

int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(long long int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}