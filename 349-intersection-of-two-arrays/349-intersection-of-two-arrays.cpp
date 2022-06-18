class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0,n=nums1.size(),m=nums2.size();
        while(i<n && j<m)
        {
           while(i<n-1 && nums1[i]==nums1[i+1])
            {
                i++;
            }
            while(j<m-1 && nums2[j]==nums2[j+1])
            {
                j++;
            }
            if(nums1[i]==nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j])
            {
                j++;
            }
            else {
                i++;
            }
           
        }
        return ans;
    }
};