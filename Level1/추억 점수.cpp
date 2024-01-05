#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    // 이름-점수 페어링
    unordered_map <string, int> scores;
    for(int i = 0; i < name.size(); i++){
        string str = name[i];
        scores[str] = yearning[i];
    }
    
    for(int i = 0; i < photo.size(); i++){
        int sum{};
        for(int j = 0; j < photo[i].size(); j++){
            string str = photo[i][j];
            sum += scores[str];
        }
        answer.push_back(sum);
    }
    return answer;
}
