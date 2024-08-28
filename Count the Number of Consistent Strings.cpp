

class Solution {
public:
    int countConsistentStrings(string& allowed, vector<string>& words) {
      map<char, bool> allowedMap;
        for(auto&c : allowed){
            allowedMap[c] = true;
        }
        int consistentCount = 0;
        for (auto&word : words) {
            bool isConsistent = true;
            for(auto&c : word){
                if(!allowedMap.count(c)) {  // If character not found in allowedMap, mark as inconsistent
                    isConsistent = false;
                    break;
                }
            }
            if(isConsistent){
                consistentCount++;  
            }
        }
        return consistentCount;
    }
};
