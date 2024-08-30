
class Solution {
public:
    string sortString(string s) {
      map<char, int> charCount;
        for (char c : s) {
            charCount[c]++;
        }

        string result;

        while (!charCount.empty()) {
            // Step 1: Append smallest to largest
            for (auto it = charCount.begin(); it != charCount.end();) {
                result += it->first;
            it->second--; 
                if (it->second == 0) {
                    it = charCount.erase(it);
                } else {
                    ++it;
                }
            }

            // Step 2: Append largest to smallest
            for (auto it = charCount.rbegin(); it != charCount.rend();) {
                result += it->first;
                it->second--;
                if (it->second == 0) {
                    // Erase by using base iterator (convert reverse iterator to normal iterator)
                    auto eraseIt = it.base();
                    --eraseIt; // Reverse iterator's base is one past the element
                    charCount.erase(eraseIt);
                } else {
                    ++it;
                }
            }
        }

        return result;
    }
};
