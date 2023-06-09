class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<=nums.size();i++)
        {
            m[i]=0;
        }
        for(auto it:nums)
        {
            m[it]++;
        }
        for(auto a:m)
        {
            if(a.second<=0)
            {
                int ans=a.first;
                return ans;
            }
        }
        return -1;
    }
};