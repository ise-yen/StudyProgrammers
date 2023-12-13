#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0;
    int hp = health;
    int t = 0; // 시전시간
    int x = bandage[1]; // 초당 회복량
    int y = bandage[2]; // 추가 회복량
    
    int lastAtk = attacks.size() - 1;
    int lastTime = attacks[lastAtk][0]; // 종료시간
    int atk = 0;
    for(int i = 0; i <= lastTime; i++){
        // 공격 당하면
        if(i == attacks[atk][0]){
            hp -= attacks[atk][1]; // 체력 감소
            if(hp <= 0) {
                hp = 0;
                answer = -1;
                return answer;
            }
            atk++; // 몬스터의 다음 공격으로 넘어감
            t = 0; // 연속 성공 초기화
        }
        else{
            t++; // 연속 성공 시간 감소
            hp += x;
            if(t == bandage[0]){
                hp += y;
                t = 0;
            }
            if(hp >= health) hp = health;
        }        
    }
    answer = hp;
    return answer;
}
