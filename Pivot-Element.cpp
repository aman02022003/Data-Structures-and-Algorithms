class Solution {
public:

  int findpivot(vector<int> arr)
    {
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        while(s<e)
        {
            if(mid+1<arr.size()&& arr[mid]>arr[mid+1])
            {
                return mid;
            }
            if(mid-1>=0 && arr[mid-1]>arr[mid])
            {
                return mid-1;
            }
            if(arr[s]>=arr[mid])
            {
                e=mid-1;
            }
            else
            {
                s=mid;
            }
            mid=s+(e-s)/2;
        }

        return s;
    }
};
