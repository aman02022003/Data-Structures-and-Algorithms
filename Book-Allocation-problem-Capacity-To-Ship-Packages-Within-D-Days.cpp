class Solution {
public:
    bool ispossiblesol(vector<int> weights,int days,int mid){
        int dayscount = 1;
        int weightcount = 0;
        
        for(int i=0;i<weights.size();i++){
            if(weightcount+weights[i]<=mid){
                weightcount+=weights[i];
            }
            else{
                dayscount++;
                weightcount = 0;
                if(weights[i]> mid || dayscount>days){
                    return false;
                }
                weightcount += weights[i];
            }
        }
        return true;
       
        
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
        
        int s = 0;
        int sum = 0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
        }
        
        int e = sum;
        int mid = s+(e-s)/2;
        int ans=0;
        
        while(s<=e){
            if(ispossiblesol(weights,days,mid)){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        
        return ans;
    }
};
