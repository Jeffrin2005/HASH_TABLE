// using hash map 
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int, bool> map1;
     map<int, bool> map2;
        vector<int> uniqueInNums1;
      vector<int> uniqueInNums2;
        for(auto&num : nums1){
            map1[num] = true;
        }
        for(auto&num : nums2) {
            map2[num] = true;
        }

        // Find elements in nums1 not in nums2
        for (auto& pair : map1) {
            if (map2.find(pair.first) == map2.end()) {
                uniqueInNums1.push_back(pair.first);
            }
        }

        // Find elements in nums2 not in nums1
        for (auto& pair : map2) {
            if (map1.find(pair.first) == map1.end()) {
                uniqueInNums2.push_back(pair.first);
            }
        }

        return {uniqueInNums1, uniqueInNums2};
    }
};// using set 
 class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
          set<int> set1(nums1.begin(), nums1.end());
       set<int> set2(nums2.begin(), nums2.end());
      vector<int> uniqueInNums1;
      vector<int> uniqueInNums2;
        // Find elements in nums1 not in nums2
        for(auto&num : set1){
            if(set2.find(num) == set2.end()){
                uniqueInNums1.push_back(num);
            }
        }
        // Find elements in nums2 not in nums1
        for(auto&num : set2){
            if (set1.find(num) == set1.end()) {
                uniqueInNums2.push_back(num);
            }
        }
        return {uniqueInNums1, uniqueInNums2};
        
    }
};
