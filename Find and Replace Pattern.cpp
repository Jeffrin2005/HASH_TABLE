
#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
class Solution {
private:
    bool isMatch(const string& word, const string& pattern) {
        if (word.size() != pattern.size()) return false;
        map<char, char> charMap; // Maps characters from pattern to word
        map<char, char> reverseMap; // Maps characters from word to pattern
        for(int i = 0; i < pattern.size(); i++){
            char p = pattern[i];
            char w = word[i];
            // Check if there is a conflicting mapping from pattern to word
            if(charMap.find(p) != charMap.end()){
                if(charMap[p] != w) return false;
            }else{
                charMap[p] = w;
            }
            // Check if there is a conflicting mapping from word to pattern
            if(reverseMap.find(w) != reverseMap.end()){
                if (reverseMap[w] != p) return false;
            }else{
                reverseMap[w] = p;
            }
        }
        return true;
    }
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>matchedWords;
        for (auto& word : words) {
            if (isMatch(word, pattern)) {
                matchedWords.push_back(word);
            }
        }
        return matchedWords;
    }
};
