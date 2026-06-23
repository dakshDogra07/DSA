class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       vector<int>prefixSum(nums.size(), 0);
       unordered_map<int,int>m;
       int count = 0;
       int val = 0;
       prefixSum[0] = nums[0];
       for(int i = 1; i < nums.size(); i++){
        prefixSum[i] = prefixSum[i-1] + nums[i];
       }

       for(int j = 0; j < nums.size(); j++){
        if(prefixSum[j] == k) count++;

        val = prefixSum[j] - k;

    
        if(m.count(val)) count = count + m[val];

        m[prefixSum[j]]++;
       }

       return count;
    }
};