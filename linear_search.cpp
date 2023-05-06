#include<iostream>
using namespace std;

void linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"found";
        }
        
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};
    linearsearch(arr,5,44);
    return 0;
}