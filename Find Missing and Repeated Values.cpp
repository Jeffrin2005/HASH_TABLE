

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        map<int, int> countMap;
        for (int i = 0; i < n;i++){
            for (int j = 0; j < n;j++){
                countMap[grid[i][j]]++;
            }
        }
        int repeated = 0, missing = 0;
        for (int i = 1; i <= n * n; i++){
            if (countMap[i] == 2) {
                repeated = i;
            } else if (countMap[i] == 0) {
                missing = i;
            }
        }
        
        return {repeated, missing};
    }
};
