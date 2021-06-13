#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n-1];
    bool flag = false;
    for(int i=0; i<n-1; i++)
        cin>>arr[i];
    for(int i=0; i<n-1; i++)
        arr[i]--;
    for(int i=0; i<n-1; i++)
        while(arr[i]!=i && arr[i]>=0 && arr[i]<n-1 && arr[arr[i]]!=arr[i])
            swap(arr[i], arr[arr[i]]);
    for(int i=0; i<n-1; i++)
        if(arr[i]!=i)
        {
            flag = true;
            cout<<i+1;
        }
    if(!flag)
        cout<<n;
    return 0;
}