class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxStreak = 0;
        int currStreak = 1;
        sort(nums.begin(),nums.end());
        if(nums.size() == 0) return 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] - nums[i-1] == 1){
                currStreak += 1;
            }
            else if(nums[i] - nums[i-1] == 0){
                continue;
            }
            else
            currStreak = 1;

            maxStreak = max(maxStreak, currStreak);
        }
        return max(maxStreak, currStreak);;
    }
};