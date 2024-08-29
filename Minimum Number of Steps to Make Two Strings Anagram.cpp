class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int> countS;
        map<char, int> countT;
        // Count frequency of each character in s and t
        for(auto&c : s) {
            countS[c]++;
        }
        for(auto&c : t){
            countT[c]++;
        }
        int replacements = 0;
      for(auto&pair : countS){
    char charS = pair.first;
    int countSVal = pair.second;
    int countTVal = countT[charS];
    if(countSVal > countTVal){
        replacements+=(countSVal - countTVal);
    }
}
        
        return replacements;
    }
};
