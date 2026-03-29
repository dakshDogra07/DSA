class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0;
        int maximum = 0;

        for(auto x: nums)
        {
            if(x == 1)
            {
                counter += 1;
                maximum = max(counter, maximum);
            }
            else 
            counter = 0;    
        }
        return maximum;
    }
};