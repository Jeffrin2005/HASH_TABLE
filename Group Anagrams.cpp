
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      map<string,vector<string>> map;
        for (auto& str : strs){
         string key = str;  
           sort(key.begin(), key.end()); 
            map[key].push_back(str);  
        }

        vector<vector<string>> result;
        for (auto& pair : map) {
            result.push_back(pair.second); 
        }

        return result;
    }
};
