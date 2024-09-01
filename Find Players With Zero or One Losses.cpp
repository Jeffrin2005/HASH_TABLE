

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> lossCount; // To track the number of losses for each player
        set<int> players; // To track all players who have participated
        for( auto& match : matches){
            int winner = match[0];
            int loser = match[1];
            // Increment the loss count for the loser
            lossCount[loser]++;
            // Add both winner and loser to the set of players
            players.insert(winner);
            players.insert(loser);
        }
        vector<int> noLosses; // Players with no losses
        vector<int> oneLoss;  // Players with exactly one loss
        // Check each player in the set
        for (auto&player : players) {
            if (lossCount[player] == 0) {
                noLosses.push_back(player);
            } else if (lossCount[player] == 1) {
                oneLoss.push_back(player);
            }
        }
        sort(noLosses.begin(), noLosses.end());
        sort(oneLoss.begin(), oneLoss.end());

        return {noLosses, oneLoss};
    }
};
