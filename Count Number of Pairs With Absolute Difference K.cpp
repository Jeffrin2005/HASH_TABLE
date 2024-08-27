// nums = [4, 6, 4, 6, 6, 8]
// k = 2
// Frequency Map:
// First, we build a frequency map (freq) from the array:
// freq[4] = 2 (4 appears twice)
// freq[6] = 3 (6 appears three times)
// freq[8] = 1 (8 appears once)
// Counting Pairs:
// Now, let's count the pairs where the absolute difference is k = 2.
// 1. For num = 4:
// Check if 4 + 2 = 6 exists in freq.
// freq[6] = 3 (6 appears three times).
// Since 4 appears 2 times and 6 appears 3 times, the number of pairs formed between 4 and 6 is 2 * 3 = 6.
// These pairs are: (4 from index 0, 6 from index 1), (4 from index 0, 6 from index 3), (4 from index 0, 6 from index 4), (4 from index 2, 6 from index 1), (4 from index 2, 6 from index 3), (4 from index 2, 6 from index 4).
class Solution {
public:
    int countKDifference(std::vector<int>& nums, int k) {
     map<int, int> freq;
        int count = 0;
        for(auto&num : nums) {
            freq[num]++;
        }
        for (auto& pair : freq) {
            int num = pair.first;
            int occurrences = pair.second;

            // Check for num + k in the map
            if (freq.find(num + k) != freq.end()) {
                count += occurrences * freq[num + k];
            }
        }

        return count;
    }
};
