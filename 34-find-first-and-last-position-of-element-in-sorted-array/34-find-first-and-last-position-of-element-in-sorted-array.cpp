class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int l=0,r=nums.size()-1,mid,shuru=-1,shes=-1;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(nums[mid]==target)
            {
                shuru=mid;
                r=mid-1;
            }
            else if(nums[mid]>target)
            {
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        ans.push_back(shuru);
        l=0,r=nums.size()-1;
        while(l<=r)
        {
          mid=l+(r-l)/2;
            if(nums[mid]==target)
            {
                shes=mid;
                l=mid+1;
            }
            else if(nums[mid]>target)
            {
                r=mid-1;
            }
            else{
                l=mid+1;
            }  
        }
        ans.push_back(shes);
        return ans;
    }
};