class Solution {
public:
    vector<int> majorityElement(vector<int>& nums){
        vector<int>ans;
        unordered_map<int,int>m;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            m[nums[i]]++;
        }
        for(int j = 0; j < n; j++){
            if( find(ans.begin(), ans.end(), nums[j]) == ans.end() && m[nums[j]] > n/3){
                ans.push_back(nums[j]);
            }
        }

        return ans;
    }
};