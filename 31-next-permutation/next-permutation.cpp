class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakingPoint = -1;
        for(int i = nums.size()-2; i >= 0; i--){
            if( nums[i] < nums[i+1]){
                breakingPoint = i;
                break;
            }
        }

        if(breakingPoint == -1){
        reverse(nums.begin(), nums.end());
        return;
        }


        for(int i = nums.size()-1; i >= 0; i--){
            if( nums[i] > nums[breakingPoint] ){
                swap( nums[i], nums[breakingPoint] );
                break;
            }
        }

        reverse(nums.begin() + breakingPoint + 1, nums.end());
        
    }
};