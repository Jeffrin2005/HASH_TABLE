class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> map;
        for(auto&x : nums) {
            map[x]++;
        }
        sort(nums.begin(), nums.end(), [&map](int a, int b){
            if(map[a] == map[b]) {
                return a > b;
            }
            return map[a] < map[b];
        });
        return nums;
    }
};
