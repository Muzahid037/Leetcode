class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans={{}};
        for(int i=0;i<nums.size();i++)
        {
            int n=ans.size();
            for(int j=0;j<n;j++)
            {
                ans.push_back(ans[j]);
                ans.back().push_back(nums[i]);
            }
        }
        return ans;
    }
};

 // vector<vector<int>> subs = {{}};
 //        for (int num : nums) {
 //            int n = subs.size();
 //            for (int i = 0; i < n; i++) {
 //                subs.push_back(subs[i]); 
 //                subs.back().push_back(num);
 //            }
 //        }
 //        return subs;