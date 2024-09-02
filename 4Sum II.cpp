

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        map<int, int> sumCount;
        int count = 0;

        for (int a : nums1) {
            for (int b : nums2) {
                sumCount[a + b]++;
            }
        }
        for (int c : nums3) {
            for (int d : nums4) {
                int target = -(c + d);
                if (sumCount.find(target) != sumCount.end()) {
                    count += sumCount[target];
                }
            }
        }

        return count;
    }
};
