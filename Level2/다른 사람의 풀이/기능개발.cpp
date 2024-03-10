#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int max_day = 0;
    for(int i = 0; i < progresses.size(); i++){
        // 나머지 값과 상관 없이 한줄에 끝냄
        int day = (99 - progresses[i]) / speeds[i]+1;
        
        if(answer.empty() || max_day < day)
            answer.push_back(1);
        else
            ++answer.back(); // cnt 변수 없이 끝냄
        
        if(max_day < day) max_day = day;
    }
    
    return answer;
}
