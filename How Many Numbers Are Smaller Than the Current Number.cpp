// nums = [8, 1, 2, 2, 3]
// copy = [8, 1, 2, 2, 3] (cloned from nums)
// Sorting copy:
// After sorting, copy = [1, 2, 2, 3, 8]
// Mapping elements to their first occurrence index:
// Loop through sorted copy and populate map:
// map[1] = 0 (first occurrence of 1)
// map[2] = 1 (first occurrence of 2, doesn't update at second 2)
// map[3] = 3 (first occurrence of 3)
// map[8] = 4 (first occurrence of 8)
// 4. Mapping original array elements to their counts:
// Loop through original nums and use map to replace elements in copy:
// copy[0] = map[8] = 4
// copy[1] = map[1] = 0
// copy[2] = map[2] = 1
// copy[3] = map[2] = 1
// copy[4] = map[3] = 3
// Final Output:
// copy = [4, 0, 1, 1, 3]
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(std::vector<int>& nums) {
      map<int, int> map;
        vector<int> copy = nums; 
       sort(copy.begin(), copy.end()); 
        for (int i = 0; i < nums.size(); i++){
            map.emplace(copy[i], i);
        }
        for (int i = 0; i < nums.size(); i++) {
            copy[i] = map[nums[i]];
        }
        
        return copy;
    }
};
