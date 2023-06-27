#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int> &arr,int n){

      for(int i=1;i<n;i++){
           int val=arr[i];
           int j=i-1;

           for(; j>=0;j--){
            if(arr[j]>val){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
           }

           arr[j+1]=val;
           
      }     

}

int main()
{
    vector<int> arr{5,4,3,2,1};
    int n=arr.size();
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}