class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=nums[0],i=0;
        int n=nums.size();
        while(i<n && n>1)
        {
            if(nums[i]==nums[i+1])
            {
                i+=2;
                if(i==nums.size()-1)
                {
                    ans=nums[i];
                    break;
                }      
            }
            else
            {
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};
