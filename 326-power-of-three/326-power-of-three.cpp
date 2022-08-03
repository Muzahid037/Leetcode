class Solution {
public:
    bool isPowerOfThree(int n) {
        bool isP=false;
        while(n%3==0 && n>1)
        {
            n/=3;
        }
        if(n==1) isP=true;
        return isP;
    }
};