class Solution {
public:
    int firstUniqChar(string s) {
        // [char].first=count [char].seconnd=index
        unordered_map<char,pair<int,int>>pr;
        int n=s.size();
        int idx=n;
        for(int i=0;i<n;i++)
        {
            pr[s[i]].first++;
            pr[s[i]].second=i;
        }
        for(auto& [c,p]:pr)
        {
           // cout<<c<<" "<<p.second<<endl;
            if(p.first==1)
            {
                idx=min(idx,p.second);
            }
        }
        return idx==n?-1:idx;
    }
};