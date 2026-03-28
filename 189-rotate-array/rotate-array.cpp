class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int> newArr;
        for(int i = nums.size() - k; i<nums.size(); i++)
        {
            newArr.push_back(nums[i]);
        }
        for(int j = 0; j < nums.size() - k; j++)
        {
            newArr.push_back(nums[j]);
        }

        nums = newArr;
    }
};