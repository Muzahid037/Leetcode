class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,m,ans;
        while(l<=r)
        {
            m=l+(r-l)/2;
            if(nums[m]==target)
            {
                ans=m;
                r=m-1;
            }
            else if(nums[m]>target)
            {
                ans=m;
                r=m-1;
            }
            else if(nums[m]<target)
            {
                ans=m+1;
                l=m+1;
            }
        }
       return ans;
    }
};