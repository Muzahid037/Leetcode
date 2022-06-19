class Solution {
    public int[] searchRange(int[] nums, int target) {
        
        //lower bound binary search
        int l = 0, r = nums.length-1;
        while(l<=r) {
            int m = l + (r-l)/2;
            if(nums[m] < target) 
                l = m + 1;
            else if (nums[m] > target) 
                r = m - 1;
            else if (nums[m] == target) 
                r = m - 1;
        }
                
        if(l== nums.length || nums[l] !=target) return new int[] {-1,-1};
        int lowerBound = l; 
        
        //upper bound binary search
        l = 0; r = nums.length-1;
        int ans=0;
        while(l<=r) {
            int m = l + (r-l)/2;
            if(nums[m] < target) 
            {
                ans=m+1;
                l = m + 1;
            }
            else if (nums[m] > target) 
            {
                r = m - 1;
            ans=m;
            }
            else if (nums[m] == target) 
            {
                l = m + 1;
             ans=m+1;
            }
        }
        return new int[] {lowerBound, ans-1};
            
    }
}