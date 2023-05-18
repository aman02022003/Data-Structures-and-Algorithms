#include<iostream>
#include<vector>
using namespace std;

int unique (vector<int> arr)
{
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}


int main()
{
    int n;
    cout<<"enter the size of array";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    
    cout<<unique(arr);
    return 0;
}