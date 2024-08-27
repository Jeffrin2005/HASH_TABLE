class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int difference = 0;
        map<char, int> indexMap;

        // Store the index of each character in string s
        for (int i = 0; i < s.length(); i++) {
            indexMap[s[i]] = i;
        }

        // Calculate the permutation difference using the indices stored in indexMap
        for (int i = 0; i < t.length(); i++) {
            difference += abs(indexMap[t[i]] - i);
        }

        return difference;
    }
};
