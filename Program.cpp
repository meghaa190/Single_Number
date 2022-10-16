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
           
                //ans= nums[i];
            
        }
        if(flag==0)
        {
            ans= nums[i+1];
        }
       
        return ans;
    }
};
