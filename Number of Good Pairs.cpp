
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        std::map<int, int> mp;
        int goodPairs = 0;
        for (int num : nums) {
            mp[num]++;
        }
        for (auto& x : mp) {
            goodPairs += x.second * (x.second - 1) / 2;
        }
        return goodPairs;
    }
};
