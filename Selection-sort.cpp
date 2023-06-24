#include<iostream>
#include<vector>
using namespace std;

void selection_sort(vector<int> arr,int n){
    
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
     for(int i=0;i<n;i++){
         cout<<arr[i];
    }
}

int main(){

    vector<int> arr{5,4,3,2,1};
    int n=5;
    selection_sort(arr,n);

   return 0;

}