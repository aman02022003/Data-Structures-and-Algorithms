#include<iostream>
#include<vector>
#include<limits>
using namespace std;

int main()
{
    vector<int>arr{1,2,3,4,5};
    vector<int>brr{1,2};

    vector<int> ans;

    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<brr.size();j++)
        {
            if(arr[i]==brr[j])
            {
                brr[j]= INT16_MIN;
                ans.push_back(arr[i]);
            }
        }
    }
    for(int value : ans)
    {
        cout<<value<<" ";
    }
    return 0;
}