#include <string>
#include <vector>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> v;
    int min = 2001;
    int pos = 0;
    for(int i = 0; i < score.size(); i++){
        if(i < k) {
            v.push_back(score[i]);
            if(min > score[i]){
                min = score[i];
                pos = i;
            }
        }
        else{
            if(score[i] > min){
                v.erase(v.begin()+pos); // 명에의 전당에서 탈락
                v.push_back(score[i]); // 신규등록
                min = 2001; // 최저값 리셋
                // 최저값 갱신
                for(int j = 0; j < v.size(); j++){
                    if(min > v[j]){
                        min = v[j];
                        pos = j;
                    }
                }
            }
        }
        answer.push_back(min);
    }
    
    
    return answer;
}
