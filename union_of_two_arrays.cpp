#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Assume there is no duplicate value in array

    int arr[5]={1,2,3,4,5};
    int brr[6]={7,8,9,10,11,12};
    int sizea=5;
    int sizeb=6;

    vector<int> unionn;

    for(int i=0;i<sizea;i++)
    {
       unionn.push_back(arr[i]);

    }
    for(int i=0;i<sizeb;i++)
    {
       unionn.push_back(brr[i]);
       
    }

    for(int i=0;i<unionn.size();i++)
    {
       cout<<unionn[i]<<" ";
    }

    return 0;
}

