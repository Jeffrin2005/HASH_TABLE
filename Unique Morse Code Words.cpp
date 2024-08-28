
// USING  MAP 
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        // Morse code representations for each alphabet letter
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        // Map to store unique Morse code transformations
        map<string, int> uniqueTransformations;
        // Iterate over each word
        for (auto&word : words) {
            string transformation = "";
            // Convert each letter in the word to Morse code
            for (char c : word) {
                transformation += morse[c - 'a']; // 'a' maps to 0, 'b' to 1, ..., 'z' to 25
            }
            // Increment the count of the transformation in the map
            uniqueTransformations[transformation]++;
        }
        // The size of the map keys is the number of unique transformations
        return uniqueTransformations.size();
    }
};
// USING SET 
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        // Morse code representations for each alphabet letter
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> uniqueTransformations;
        
        for (auto&word : words) {
            string transformation = "";
            // Convert each letter in the word to Morse code
            for (auto&c : word) {
                transformation += morse[c - 'a']; // 'a' maps to 0, 'b' to 1, ..., 'z' to 25
            }
            // Insert the transformation into the set
            uniqueTransformations.insert(transformation);
        }
        return uniqueTransformations.size();
    }
};
