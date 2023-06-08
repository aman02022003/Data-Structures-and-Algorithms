#include<iostream>
using namespace std;

bool linearsearch(int arr[][3],int row,int col,int key)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==key)
            {
            return true;
            }
            
        }
        
    }
    return false;
}

int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"enter the key";
    cin>>key;
   if( linearsearch(arr,3,3,key))
   {
    cout<<"key is present";
   }
   else{
    cout<<"key is not present";
   }
    return 0;
}