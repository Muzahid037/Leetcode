class Solution
{
    public: 
        int longestCommonSubsequence(string text1, string text2)
        {
            int n=text1.length(),m=text2.length();
            int dp[2][m+1];
            memset(dp,0,sizeof(dp));
            bool bi;
            for(int i=1;i<=n;i++)
            {
             bi=i & 1;
                for(int j=1;j<=m;j++)
                {
                    if(text1[i-1]==text2[j-1])
                    {
                        dp[bi][j]=(1+dp[1-bi][j-1]);
                    }
                    else {
                        dp[bi][j]=max(dp[1-bi][j],dp[bi][j-1]);
                    }
                }
            } 
            return dp[bi][m];
        }
};