class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>rearrangedNums(nums.size());
        int posIndex = 0;
        int negIndex = 1;
        for(int i = 0; i < nums.size(); i++){
            if( nums[i] >= 0 ){
                rearrangedNums[posIndex] = nums[i] ;
                posIndex += 2;
            }
            else{
            rearrangedNums[negIndex] = nums[i] ;
            negIndex += 2;
            }
        }

        return rearrangedNums;
    }
};