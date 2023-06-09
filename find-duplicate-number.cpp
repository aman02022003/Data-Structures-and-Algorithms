class Solution {
public:
    int findDuplicate(vector<int>& nums) {
 /*       unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto i:m)
        {
            if(i.second>=2)
            {
                int ans= i.first;
                return ans;
            }
        }
        return -1;*/

        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[i+1])
            {
                return nums[i];
            }
        }
        return -1;
    }
};