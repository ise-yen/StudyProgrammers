#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<char, int> m = {{'R', 0}, {'T', 0}, {'C', 0}, {'F', 0}, 
                     {'J', 0}, {'M', 0}, {'A', 0}, {'N', 0}};

char check(char a, char b){
    if(m[a] > m[b]) return a;
    else if(m[a] < m[b]) return b;
    else{
        if(a < b) return a;
        else return b;
    }
}
string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    // 라이언, 튜브, 콘, 프로도, 제이지, 무지, 어피치, 네오
    for(int i = 0; i < survey.size(); i++){
        int score{};
        char a = survey[i][0];
        char b = survey[i][1];
        if(choices[i] == 4) continue;
        else if(choices[i] < 4) {
            score = 4 - choices[i];
            m[a] += score;
        }
        else if(choices[i] > 4) {
            score = choices[i] - 4;
            m[b] += score;
        }
    }
    
    answer.push_back(check('R', 'T'));
    answer.push_back(check('C', 'F'));
    answer.push_back(check('J', 'M'));
    answer.push_back(check('A', 'N'));
    
    return answer;
}

