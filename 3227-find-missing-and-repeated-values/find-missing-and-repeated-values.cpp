class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> m;
        int repeated = 0;
        int missing = 0;
        int n = grid.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                m[grid[i][j]]++;
            }
        }
        for(auto x : m)
        {
            if(x.second == 2)
            repeated = x.first;
        }
        for(int i=1;i<=n*n;i++)
        {
            if(m.count(i) == 0)
            {
                missing = i;
                break;
            }
        }
        return{repeated,missing};
    }
};