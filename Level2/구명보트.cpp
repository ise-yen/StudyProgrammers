#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int i, int j){
    return i > j;
}
int solution(vector<int> people, int limit) {
    int answer = 0;
    
    sort(people.begin(), people.end(), compare);
    
    int sum{};
    int j = people.size() - 1;
    for(int i = 0; i < people.size(); i++){
        if(i > j) break;
        sum = people[i];
        for(j; j > i; j--){
            if(sum + people[j] <= limit){
                j--;
                break;
            }
            else{
                break;
            }
        }
        answer++;
    }

    return answer;
}
