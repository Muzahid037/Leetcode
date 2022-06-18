class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int bits=1<<n;
        vector<vector<int>>ans={{}};
        for(int i=1;i<bits;i++)
        {
            vector<int>tmp;
            for(int j=1;j<=n;j++)
            {
                if(1<<(j-1) & i)
                {
                    tmp.push_back(nums[j-1]);
                }
            }
            ans.push_back(tmp);
            tmp.clear();
        }
        return ans;
    }
};