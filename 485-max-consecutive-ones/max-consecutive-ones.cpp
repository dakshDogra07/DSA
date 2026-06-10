class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0 ;
        int maximum = 0 ;
        for( int i = 0 ; i < nums.size() ; i++ ){
            if( nums[i] == 1 ){
                counter++;
            }
            else
            {
                maximum = max(maximum, counter);
                counter = 0;
            }
        }
    maximum = max(maximum, counter);
    return maximum; 
    }
};