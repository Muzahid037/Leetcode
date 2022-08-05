class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
            int n = s.size();
            if (n < 2) return n;
            int left = 1, len, ans = 0;
            unordered_map<char, int> pos;
            for (int i = 0; i < n; i++)
            {
                if (pos[s[i]] > 0)
                {
                    len = (i - left) + 1;
                    ans = max(ans, len);
                    left = max(left, pos[s[i]] + 1);
                }
                pos[s[i]] = i + 1;
            }
            len = (n - left) + 1;
            ans = max(ans, len);
            return ans;
        }
};