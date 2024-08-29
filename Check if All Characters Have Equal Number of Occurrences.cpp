

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int> count;
        for(auto&c : s) {
            count[c]++;
        }
        int freq = count.begin()->second; // Get the frequency of the first character
        for (auto& p : count) {
            if (p.second != freq) {
                return false; // If any frequency doesn't match, return false
            }
        }
        return true; // All frequencies matched
    }
};
