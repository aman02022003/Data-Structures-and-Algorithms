#include<iostream>
using namespace std;

void rev(int arr[],int n)
{
    
   int s=0;
   int e=n-1;

   while(s<=e)
   {
       
        swap(arr[s],arr[e]);
        s++;
        e--;
   }

    
}

int main()
{
    int arr[6]={1,2,3,4,5,7};
    int n=6;
   
    rev(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;

}