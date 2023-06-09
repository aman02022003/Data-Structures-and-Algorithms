#include<iostream>
using namespace std;

void sortNegative(int arr[],int n){
    int i=0;
    int j=n-1;

    while(i<j){
        if(arr[i]<0)
        {
            i++;
        }
        else if(arr[j]>0)
        {
            j--;
        }
        else{
            swap(arr[i],arr[j]);
        }
    }
}

void printArray(int arr[],int n)
{
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sortNegative(arr,n);
    printArray(arr,n);

    return 0;
}