class Solution {
public:
    bool isPalindrome(int x) {
        
       if(x<0) return false;
        long int num=0;
        int q=x;          
        int r=0;
        while(q)
        {
            r=q%10;                  
            num=num*10+r;
            q/=10;                    
        }
        if(num==x) return true;
        else return false;
    }
};