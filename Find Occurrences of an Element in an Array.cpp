

class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        // Map to store the indices of occurrences of x
        map<int, vector<int>>indexMap;
        //  the map with indices of occurrences of x
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == x){
                indexMap[x].push_back(i);
            }
        }
        vector<int> results;
        for (auto&query : queries){
            // Check if the occurrence exists
            if (query > indexMap[x].size()) {
                results.push_back(-1);
            }else{
                results.push_back(indexMap[x][query - 1]); // query - 1 because queries are 1-based
            }
        }

        return results;
    }
};
// nums = [1, 3, 1, 7]
// queries = [1, 3, 2, 4]
// x = 1

// indexMap is an empty map.
// results is an empty vector.
// Filling the Map:
// Iterate over nums:
// i = 0, nums[i] = 1 (matches x), so indexMap[1] becomes [0].
// i = 1, nums[i] = 3 (does not match x), no change.
// i = 2, nums[i] = 1 (matches x), so indexMap[1] becomes [0, 2].
// i = 3, nums[i] = 7 (does not match x), no change.
// After this loop, indexMap looks like {1: [0, 2]}.
// Processing Queries:
// For each query in queries:
// query = 1, check indexMap[1].size() (which is 2). Since 1 ≤ 2, results.push_back(indexMap[1][0]) which is 0.
// query = 3, check indexMap[1].size() (which is 2). Since 3 > 2, results.push_back(-1).
// query = 2, check indexMap[1].size() (which is 2). Since 2 ≤ 2, results.push_back(indexMap[1][1]) which is 2.
// query = 4, check indexMap[1].size() (which is 2). Since 4 > 2, results.push_back(-1).
// 4. Final Results:
// results = [0, -1, 2, -1].
