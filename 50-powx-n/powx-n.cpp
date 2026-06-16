class Solution {
public:
    double myPow(double x, int n) {
        double long  result = 1;
        long long n2 = abs((long long)n);

        if( n < 0){
            x = 1/x ;            
       }

       while(n2 > 0){
        if(n2 % 2 == 1){
            result *= x;
        }
        x *= x;
        n2 /= 2;
        }
        return result;
    }
};