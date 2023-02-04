#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int end){
    int start = 0;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverseArray(arr, n-1);
    for(int element : arr){
        cout<<element<<" ";
    }

    return 0;
}