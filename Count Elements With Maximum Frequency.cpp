
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> freqMap;
        int maxFreq = 0;
        for(auto&num : nums) {
            freqMap[num]++;
            maxFreq = max(maxFreq, freqMap[num]);
        }

        int count = 0;
        // Count the total number of elements that have the maximum frequency
        for (auto& pair : freqMap) {
            if (pair.second == maxFreq) {
                count += pair.second;
            }
        }

        return count;
    }
};
