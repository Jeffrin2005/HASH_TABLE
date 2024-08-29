
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int, int> count;
        int n = nums.size() / 2;
        for(auto&num : nums){
            count[num]++;
            if(count[num] == n) return num;
        }
        return -1; 
    }
};
