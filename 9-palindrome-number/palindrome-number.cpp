class Solution {
public:
    bool isPalindrome(int x) {
        int rem = 0;
        long long rev=0;
        int n=x;
        for(;x>0;x=x/10)
        {
            rem = x%10;
            rev = rev*10 + rem;
        }
        if(rev == n)
        return true;

        return false;
    }
};