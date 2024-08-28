// USING SET 
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> outgoing;
        for(auto& path : paths) {
            outgoing.insert(path[0]);
        }
        for (auto& path : paths) {
            if (outgoing.find(path[1]) == outgoing.end()) {
                return path[1];
            }
        }
        return "";
    }
};
// USING MAP 

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, bool> hasOutgoing;
        for (auto& path : paths) {
            hasOutgoing[path[0]] = true;
            // Ensure all destination cities are in the map but not marked as having outgoing paths
            if(hasOutgoing.find(path[1]) == hasOutgoing.end()) {
                hasOutgoing[path[1]] = false;
            }
        }
        // Find the city that does not have any outgoing paths
        for(auto&entry : hasOutgoing){
            if (!entry.second) {  // If the city has no outgoing paths
                return entry.first;
            }
        }
        return "";
    }
};
