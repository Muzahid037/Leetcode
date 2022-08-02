class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        vector<pair<int,int>>pr;
        for(int i=0;i<n;i++)
        {
            pr.push_back(make_pair(nums[i],i));
        }
        sort(pr.begin(),pr.end());
        // for(int i=0;i<n;i++)
        // {
        //     cout<<pr[i].first<<" "<<pr[i].second<<endl;
        // }
        
        int i=0,j=n-1;
        while(i<j)
        {
            if(pr[i].first+pr[j].first==target)
            {
                return {pr[i].second,pr[j].second};
            }
            else if(pr[i].first+pr[j].first>target)
            {
                j--;
            }
            else {
                i++;
            }
        }
        
        return {pr[i].second,pr[j].second};
    }
};