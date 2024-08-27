

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        //  a map to store jewels
       map<char,bool> jewelMap;
        // Populate the map with jewels
        for(auto&jewel : jewels){
            jewelMap[jewel] = true;
        }
        int count = 0;
        for(auto&stone : stones){
            if(jewelMap.find(stone) != jewelMap.end()) {
                count++;
            }
        }
        
        return count;
    }
};
