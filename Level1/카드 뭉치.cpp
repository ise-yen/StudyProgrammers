#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    bool flag = true;
    int pos1{}, pos2{};
    
    for(int i = 0; i < goal.size(); i++){
        string target = goal[i];
        
        if(cards1[pos1] == target){
            pos1++;
            continue;
        }
        
        if(cards2[pos2] == target){
            pos2++;
            continue;
        }
        
        flag = false;
        break;
    }
    
    if(flag) answer = "Yes";
    else answer = "No";
    return answer;
}
