
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int, int> freq;
        int maxFreq = 0;

        // Count the frequency of each number and find the maximum frequency
        for (auto&num : nums){
            freq[num]++;
            maxFreq = max(maxFreq, freq[num]);
        }
        vector<vector<int>> result(maxFreq);
        // Reset frequency counts for distribution across rows
        for(auto& pair : freq){
            pair.second = 0;
        }
        for(auto&num : nums) {
            int placement = freq[num];
            freq[num]++;
            result[placement].push_back(num);
        }

        return result;
    }
};
