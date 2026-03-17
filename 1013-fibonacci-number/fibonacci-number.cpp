class Solution {
public:
    int fib(int n) {
        int a=0,b=1;
        int x=0;
        if(n==0)
        return 0;
        else{
        for(int i=0;i<n;i++)
        {
            x=b+a;
            a=b;
            b=x;
        }
        }
        return a;
    }
};