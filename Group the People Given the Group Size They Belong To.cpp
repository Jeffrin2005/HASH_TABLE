// i = 0 (groupSizes[0] = 3)
// groups[3] becomes [0].
// Map state: {3: [0]}
// i = 1 (groupSizes[1] = 3)
// groups[3] becomes [0, 1].
// Map state: {3: [0, 1]}
// i = 2 (groupSizes[2] = 3)
// groups[3] becomes [0, 1, 2].
// Since the size of groups[3] is now 3, it matches the group size. Add [0, 1, 2] to result and clear groups[3].
// result becomes [[0, 1, 2]].
// Map state: {3: []}
class Solution {
public:
   vector<vector<int>> groupThePeople(std::vector<int>& groupSizes) {
        map<int, vector<int>> groups;
      vector<vector<int>> result;
        for (int i = 0; i < groupSizes.size(); i++){
            int size = groupSizes[i];
            groups[size].push_back(i);
            if (groups[size].size() == size) {
                result.push_back(groups[size]);
                groups[size].clear(); 
            }
        }

        return result;
    }
};
