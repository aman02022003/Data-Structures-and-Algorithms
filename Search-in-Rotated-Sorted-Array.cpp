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
    int searchh(vector<int>& nums, int target,int ss,int ee) {
        int s=ss;
        int e=ee;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(target>nums[mid])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return -1;
    }
    
    

    int search(vector<int>& nums, int target) {
        

        int pivotindex=findpivot(nums);
        if(target>=nums[0] && target<=nums[pivotindex])
        {
            int ans=searchh(nums,target,0,pivotindex);
            return ans;
        }
        if(pivotindex+1<nums.size() && target>=nums[pivotindex+1] && target<=nums[nums.size()-1])
        {
            int ans=searchh(nums,target,pivotindex+1, nums.size()-1);
            return ans;
        }

        return -1;
    }
};