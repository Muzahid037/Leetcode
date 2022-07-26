class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>mx;
    for(int i=0;i<nums.size();i++)
    {
        mx.push(nums[i]);
        if(mx.size()>k)
        {
            mx.pop();
        }
    }
    return mx.top();
    }
};