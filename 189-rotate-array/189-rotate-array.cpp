class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>copyNums;
        copyNums=nums;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            nums[(i+k)%n]=copyNums[i];
        }
    }
};