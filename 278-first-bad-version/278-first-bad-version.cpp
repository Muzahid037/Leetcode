// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long l=1,r=n,ans;
        while(l<r)
        {
            long long mid=(l+r)/2;
            bool isBad=isBadVersion(mid);
            if(isBad)
            {
                ans=mid;
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};