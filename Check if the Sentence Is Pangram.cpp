
class Solution {
public:
    bool checkIfPangram(std::string sentence) {
     map<char, int> letterCount;
        for(auto&c : sentence) {
            letterCount[c]++;
        }
        // Check if all letters from 'a' to 'z' are present
        for(char c = 'a'; c <= 'z'; c++){
            if (letterCount[c] == 0) {
                return false;
            }
        }
        
        return true;
    }
};
