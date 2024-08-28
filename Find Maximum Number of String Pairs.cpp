class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
      map<string, int> wordMap;
        int pairCount = 0;
        for (int i = 0; i < words.size(); i++){
            wordMap[words[i]] = i;
        }

        // Check for pairs
        for (int i = 0; i < words.size(); ++i) {
           string reversedWord = words[i];
      reverse(reversedWord.begin(), reversedWord.end());
            // Check if the reversed w  ord exists in the map and ensure i < j
            if (wordMap.count(reversedWord) && i < wordMap[reversedWord]) {
                pairCount++;
            }
        }

        return pairCount;
    }
};
