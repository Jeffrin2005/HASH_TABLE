
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int, int> countTarget;
        map<int, int> countArr;
        for(int num : target) {
            countTarget[num]++;
        }
        for (int num : arr) {
            countArr[num]++;
        }
        return countTarget == countArr;
    }
};
