#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;


vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    unordered_map<string, int> mByPlayer;
    unordered_map<int, string> mByRank;
    
    for(int i = 0; i < players.size(); i++){
        answer.push_back(players[i]);
        mByPlayer.insert({players[i], i});
        mByRank.insert({i, players[i]});
    }
    
    for(int i = 0; i < callings.size(); i++){
        string call = callings[i];
        
        auto it = mByPlayer.find(call);
        int rank = it->second;

        auto it2 = mByRank.find(rank);
        string player = it2->second;
        string front = mByRank[rank-1];
        mByPlayer[player] = rank-1;
        mByPlayer[front] = rank;
        
        mByRank[rank-1] = player;
        mByRank[rank] = front;
    }
    
    for(int i = 0; i < players.size(); i++)
        answer[i] = mByRank[i];
    
    
    return answer;
}
