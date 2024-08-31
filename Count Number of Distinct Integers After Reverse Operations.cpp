// using map 
class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
   map<int, bool> distinctNumbers; 
    for (auto&num : nums) {
        distinctNumbers[num] = true;
    }
    // Process each number and insert its reversed version into the map
    for (auto&num : nums){
        int reversedNum = 0;
        while(num > 0) {
            reversedNum = reversedNum * 10 + num % 10; // Reverse the number
            num /= 10;
        }
        distinctNumbers[reversedNum] = true; 
    }

    return distinctNumbers.size();
    }
};     // USING SET 
class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
      
    set<int> distinctNumbers(nums.begin(), nums.end()); 
    for (auto&num : nums) {
        int reversedNum = 0;
        while(num > 0) {
            reversedNum = reversedNum * 10 + num % 10; 
            num /= 10;
        }
        distinctNumbers.insert(reversedNum); 
    }

    return distinctNumbers.size(); 
    }
};
