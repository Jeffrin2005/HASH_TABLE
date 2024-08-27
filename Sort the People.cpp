
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        // Create a map that sorts by key in descending order
        map<int, string, greater<int>> sortedMap;

        // Populate the map
        for (int i = 0; i < heights.size(); ++i) {
            sortedMap[heights[i]] = names[i];
        }

        // Extract the sorted names based on descending heights
        vector<string> sortedNames;
        for (auto& pair : sortedMap) {
            sortedNames.push_back(pair.second);
        }

        return sortedNames;
    }
};
