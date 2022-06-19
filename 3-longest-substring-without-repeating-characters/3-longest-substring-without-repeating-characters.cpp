class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int ans=0,n=s.size(),stIdx=1,len=0;
        map<int,int>pos;
        for(int i=0;i<n;i++)
        {
            if(pos[s[i]-'a']>0)
            {
                stIdx=max(stIdx,pos[s[i]-'a']);
                len=(i+1)-stIdx;
            }
            else
            {
                len++;
            }
            ans=max(ans,len);
            pos[s[i]-'a']=i+1;
    }
        return ans;
    }
};