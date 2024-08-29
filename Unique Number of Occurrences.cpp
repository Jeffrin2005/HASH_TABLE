

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> countMap;
        for(auto&num : arr) {
            countMap[num]++;
        }
        set<int> occurrences;
        // Check for unique occurrences
        for (auto&pair : countMap){
            if (occurrences.find(pair.second) != occurrences.end()) {
                // If the occurrence count is already in the set, return false
                return false;
            }
            occurrences.insert(pair.second);
        }

        return true;
    }
};
