class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int complement = 0;
        unordered_map<int,int> m;
        for(int i = 0; i < nums.size(); i++)
        {
            complement = target - nums[i];

            if(m.count(complement))
            return { m[complement], i };

            else
            m[nums[i]] = i;
        }
        return {0,0};
    }
};