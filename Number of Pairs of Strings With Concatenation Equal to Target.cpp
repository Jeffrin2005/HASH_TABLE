

class Solution {
public:
    int numOfPairs(vector<string>& nums,string target) {
        map<string, int> count;
        int result = 0;
        for(auto& num : nums) {
            count[num]++;
        }
        // Check each string in nums
        for (auto&num : nums) {
            // Calculate the needed suffix to form the target
            if (target.size() > num.size() && target.substr(0, num.size()) == num) {
                string suffix = target.substr(num.size());
                if(count.find(suffix) != count.end()) {
                    result+=count[suffix];
                    // If the suffix is the same as num, we should decrement the count by one
                    // because we cannot use the same element twice for the same pair
                    if(suffix == num){
                        result--;
                    }
                }
            }
        }
        
        return result;
    }
};
