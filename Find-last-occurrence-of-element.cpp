#include<iostream>
using namespace std;


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
    int arr[]={1,2,2,2,3,3,3,3,3,3};

    cout<<floe(arr,n,2);
    return 0;
    
}