class Solution {
public:
    bool isPalindrome(int x) {
        long long int ans=0;
        int y=x;
        int rem;
    
        while(y > 0)
        {
            rem = y % 10;
            ans = ans*10 + rem;
            y = y/10;   
        }
        if(ans == x)
        return true;

        else
         return false;
    }
};