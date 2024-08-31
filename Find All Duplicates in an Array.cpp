

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> countMap;
        vector<int> duplicates;
        for (auto&num : nums) {
            countMap[num]++;
        }
        for (auto& pair : countMap) {
            if (pair.second == 2) {
                duplicates.push_back(pair.first);
            }
        }

        return duplicates;
    }
};
