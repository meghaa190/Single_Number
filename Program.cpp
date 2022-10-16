class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0,flag=2,i;
        //int start=0, end=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[i+1])
            {
                i+=2;
                flag=0;
                if(i==nums.size())
                {
                    ans=nums[i];
                    break;
                }
                //flag=0;
                //break;
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
