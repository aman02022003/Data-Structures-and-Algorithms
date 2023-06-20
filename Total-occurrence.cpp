#include<iostream>
using namespace std;


int ffoe(int arr[],int n,int key){

    int s=0;
    int e=n-1;

    int mid=s+e/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+e/2;
    }

    return ans;

}
int floe(int arr[],int n,int key){

    int s=0;
    int e=n-1;

    int mid=s+e/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
           
        }
        else{
            s=mid+1;
        }
        mid=s+e/2;
    }

    return ans;

}

int main(){

    int n=10;
    int arr[]={1,2,2,2,3,5,6,7,8,9};

    int f=ffoe(arr,n,2);
    int l=floe(arr,n,2);
    int t=l-f+1;
    cout<<t;
    return 0;
    
}