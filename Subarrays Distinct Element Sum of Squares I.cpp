

class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int totalSum = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            map<int, int> freq;
            int distinctCount = 0;
            for (int j = i; j < n;j++){
                // If the element is seen for the first time, increment the distinct count
                if(freq[nums[j]] == 0){
                    distinctCount++;
                }
                // Increment the frequency of the current element
                freq[nums[j]]++;
                // Add the square of the current distinct count to the total sum
                totalSum+=distinctCount * distinctCount;
            }
        }

        return totalSum;
    }
};
