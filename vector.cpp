#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr;
    cout<<endl;

    cout<<arr.size();
    cout<<endl;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    cout<<arr.size();
    cout<<endl;
    for(int i=0; i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr.capacity();
    cout<<endl;

    arr.pop_back();

   for(int i=0; i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
   cout<<endl;
    vector<int> brr(10);

    cout<<"size of brr "<<brr.size();
    cout<<endl;
    for(int i=0; i<brr.size();i++)
    {
        cout<<brr[i]<<" ";
    }

    cout<<endl;
    vector<int> crr(10 , -1);

    cout<<"size of brr "<<brr.size();
    cout<<endl;
    for(int i=0; i<crr.size();i++)
    {
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    cout<<"vector is empty or not "<<crr.empty();
    return 0;

}