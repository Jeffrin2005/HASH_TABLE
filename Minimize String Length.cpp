class Solution {
public:
    int minimizedStringLength(string s) {
        sort(s.begin(), s.end());
        for (int i = 0; i < s.size() - 1; ) {
            if (s[i] == s[i + 1]) {
                s.erase(i, 1);
            } else {
                ++i;
            }
        }
        return s.size();
    }
};
