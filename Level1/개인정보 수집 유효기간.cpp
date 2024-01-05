#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    int ty = stoi(today.substr(0, 4));
    int tm = stoi(today.substr(5, 2));
    int td = stoi(today.substr(8, 2));

    unordered_map<char, int> um;
    for(int i = 0; i < terms.size(); i++){
        char c = terms[i][0]; // 약관 종류
        
        string str = terms[i].substr(2, terms[i].length() - 2); // 시간
        int mm = stoi(str);
        
        um.insert({c, mm});
    }
    
    for(int i = 0; i < privacies.size(); i++){
        int year = stoi(privacies[i].substr(0, 4)); // 연도
        int month = stoi(privacies[i].substr(5, 2)); // 월
        int day = stoi(privacies[i].substr(8, 2)); // 일
        char c = privacies[i][11];

        auto it = um.find(c);
        if(it != um.end()){
            int mm = it->second;

            month += mm;
            year += month / 12;
            if(month % 12 == 0){
                month = 12;
                year--;
            }
            else{
                month %= 12;
            }
            
            if(year < ty) answer.push_back(i+1);
            else if(year == ty) {
                if(month < tm) answer.push_back(i+1);
                else if(month == tm){
                    if(day <= td) answer.push_back(i+1);
                }
            }
        }
    }
    return answer;
}
