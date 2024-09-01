// USING SET 
class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        set<string> set(nums.begin(), nums.end());
        int n = nums[0].size();
        for (int i = 0; i < (1 << n); ++i) {
            string candidate = "";
            for (int j = 0; j < n; ++j) {
                if (i & (1 << j)) {
                    candidate = "1" + candidate;
                } else {
                    candidate = "0" + candidate;
                }
            }
            if (set.find(candidate) == set.end()) {
                return candidate;
            }
        }
        return ""; 
    }
};  // using map 

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        map<string, bool> presenceMap;
        for(auto& num : nums) {
            presenceMap[num] = true; 
        }
        int n = nums[0].size();
        for (int i = 0; i < (1 << n); i++){
            string candidate = "";// binary converting 
            for (int j = 0; j < n; j++){
                if (i & (1 << j)) {
                    candidate = "1" + candidate;
                } else {
                    candidate = "0" + candidate;
                }
            }
            if(presenceMap.find(candidate) == presenceMap.end()) { // Check if not present
                return candidate;
            }
        }
        return ""; 
    }
};
