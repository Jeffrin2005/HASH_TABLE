
class Solution {
public:
    string decodeMessage(string key, string message) {
       map<char, char> charMap;
        char currentChar = 'a';
        for(auto&ch : key){
            if(ch != ' ' && charMap.find(ch) == charMap.end()) {
                charMap[ch] = currentChar;
                currentChar++;
            }
        }
        string decodedMessage = "";
        for(auto&ch : message){
            if (ch == ' '){
                decodedMessage += ' ';
            }else{
                decodedMessage += charMap[ch];
            }
        }

        return decodedMessage;
    }
};
