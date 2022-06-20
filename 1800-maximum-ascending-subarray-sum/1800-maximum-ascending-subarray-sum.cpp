class Solution
{
    public:
        int maxAscendingSum(vector<int> &nums)
        {
            int ans = 0, sum = nums[0];
            for (int i = 1; i < nums.size(); i++)
            {
                if (nums[i - 1] >= nums[i])
                {
                    ans = max(ans, sum);
                    sum = nums[i];
                }
                else
                {
                    sum += nums[i];
                }
            }
            ans = max(ans, sum);
            return ans;
        }
};