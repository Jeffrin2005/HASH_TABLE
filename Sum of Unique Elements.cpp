class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int, int> count;
        int sum = 0;
        // Count each number's occurrences
        for(auto&num : nums) {
            count[num]++;
        }
        // Sum up numbers that appear exactly once
        for (auto& [num, cnt] : count) {
            if (cnt == 1) {
                sum += num;
            }
        }

        return sum;
    }
};
