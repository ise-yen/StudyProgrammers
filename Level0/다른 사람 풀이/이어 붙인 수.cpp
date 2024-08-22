#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string odd{}, even{};
    for(int i = 0; i < num_list.size(); i++){
        num_list[i] % 2 == 1 ? odd += to_string(num_list[i]) : even += to_string(num_list[i]);
    }
    return answer = stoi(odd) + stoi(even);
}
