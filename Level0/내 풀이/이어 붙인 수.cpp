#include <cmath>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int odd{}, even{};
    for(int i = num_list.size()-1; i >= 0; i--){
        int n = num_list[i];
        if(n % 2 == 1) answer += n * pow(10, odd++);
        else answer += n * pow(10, even++);
    }
    return answer;
}
