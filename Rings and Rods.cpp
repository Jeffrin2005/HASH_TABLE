class Solution {
public:
    int countPoints(string rings) {
       map<char, set<char>> rodColors;
        for (int i = 0; i < rings.size(); i += 2){
            char color = rings[i];
            char rod = rings[i + 1];
            rodColors[rod].insert(color);
        }
        int count = 0;
         for (auto& [rod, colors] : rodColors) {
            if (colors.size() == 3) {
                count++;
            }
        }

        return count;
    }
};
