#include<iostream>
using namespace std;

void printex(int arr[],int n)
{
    
   int s=0;
   int e=n-1;

   while(s<=e)
   {
       
        if(s==e)
        {
            cout<<arr[s]<<" ";
        }
        else{
            cout<<arr[s]<<" ";
            cout<<arr[e]<<" ";
        }
        s++;
        e--;
   }

    
}

int main()
{
    int arr[6]={1,2,3,4,5,7};
    int n=6;
   
    printex(arr,n);
    return 0;

}