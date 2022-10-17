class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0,i=0;
        while(i<nums.size())
        {
            if(nums[i]==nums[i+1])
            {
                i+=2;
                //flag=0;
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
           
                //ans= nums[i];
            
        }
        
       
        return ans;
    }
};
