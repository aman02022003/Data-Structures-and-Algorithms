#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int sum=50;
    vector<int> v{10,20,30,40,50};
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]+v[j]==sum)
            {
                cout<<"found of pair of sum "<<v[i]<<"+"<<v[j]<<" "<<"for "<<sum<<endl;
            }
        }
    }
    return 0;
}