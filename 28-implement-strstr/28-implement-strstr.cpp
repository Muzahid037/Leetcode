class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        if(haystack.size()<needle.size()) return -1;
        if(haystack.size()==needle.size() && haystack==needle) return 0;
        else if(haystack.size()==needle.size() && haystack!=needle) return -1;
        for(int i=0;i<haystack.size()-needle.size()+1;i++)
        {
            string s=haystack.substr(i,needle.size());
            cout<<s<<endl;
            cout<<i<<endl;
            if(s==needle) return i;
        }
        return -1;
    }
};