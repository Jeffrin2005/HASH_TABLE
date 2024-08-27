

class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
     map<int, int> countMap;
        for(int num : nums2) {
            int product = num * k;
            countMap[product]++;
        }
        
        int goodPairs = 0;
        for (int num : nums1) {
    for (const auto& pair : countMap) {
        if (num % pair.first == 0) {
            goodPairs += pair.second;
        }
    }
}
        
        return goodPairs;
    }
};
