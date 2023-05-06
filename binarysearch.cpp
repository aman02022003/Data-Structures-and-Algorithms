#include<iostream>
using namespace std;

int binarysearch(int arr[] , int n ,int key){
    int s=0;
    int e=n-1;
    int mid=s+e/2;
    while(s<e)
    {
        if(arr[mid]==key)
        {
           return arr[mid];
        }
        if(arr[mid]>s)
        {
            s=mid+s;
        }
        if(arr[mid]<s)
        {
            e=mid-e;
        }
        mid=s+e/2;
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
   cout<<"your target"<<" "<<binarysearch(arr,n,key);
    
    return 0;
}