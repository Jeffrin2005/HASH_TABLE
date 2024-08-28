

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string, int> freq;
        for(auto&x : arr){
            freq[x]++;
        }
        // Iterate through the array and find the kth distinct string
        for(auto&str : arr){
            if(freq[str] == 1){ // Check if the string is distinct
                k--; // Decrement k for each distinct string found
                if(k == 0){
                    return str;
                }
            }
        }
        
        // If there are fewer than k distinct strings, return an empty string
        return "";
    }
};
