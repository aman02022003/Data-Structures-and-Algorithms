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

int main(){

    int n=5;
    int arr[]={2,2,3,3,5};

    cout<<ffoe(arr,n,2);
    return 0;
    
}