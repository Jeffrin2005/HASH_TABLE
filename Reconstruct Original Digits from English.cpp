
class Solution {
public:
    string originalDigits(string s) {
        map<char, int> count;
        for (auto& c : s) {
            count[c]++;
        }
        vector<int> num(10, 0);

        num[0] = count['z']; // "zero"
        num[2] = count['w']; // "two"
        num[4] = count['u']; // "four"
        num[6] = count['x']; // "six"
        num[8] = count['g']; // "eight"

        num[1] = count['o'] - num[0] - num[2] - num[4]; // "one" (remaining 'o' after 0, 2, 4)
        num[3] = count['h'] - num[8]; // "three" (remaining 'h' after 8)
        num[5] = count['f'] - num[4]; // "five" (remaining 'f' after 4)
        num[7] = count['s'] - num[6]; // "seven" (remaining 's' after 6)
        num[9] = count['i'] - num[5] - num[6] - num[8]; // "nine" (remaining 'i' after 5, 6, 8)

        string result;
        for (int i = 0; i < 10; i++) {
            result += string(num[i], '0' + i);
        }

        return result;
    }
};
