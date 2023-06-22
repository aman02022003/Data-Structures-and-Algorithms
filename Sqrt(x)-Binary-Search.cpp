class Solution {
public:
    int mySqrt(int x) {
        
        int ans=-1;
        int s=0;
        int e=x;
        long long mid=s+(e-s)/2;
        int target=x;
        while(s<=e)
        {
            if((mid*mid)==target)
            {   
                
                return mid;
            }
            if((mid*mid)>target)
            {
                e=mid-1;
            }
            else
            {   
                ans=mid;
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};