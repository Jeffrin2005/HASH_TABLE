class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
    map<int, int> count;
        int result = 0;
        for(auto&num : nums) {
            count[num]++;
        }
        // XOR all numbers that appear exactly twice
        for(auto&pair : count){
            if(pair.second == 2) {
                result ^= pair.first;
            }
        }
        return result;
    }
};
