#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    map<int, int> m;
    for(int i = 0; i < 10; i++){
        m.insert({i, 0});
    }
    
    for(int i = 0; i < numbers.size(); i++){
        int tmp = numbers[i];
        m[tmp]++;
    }
    
    for(auto it : m){
        if(it.second == 0) answer += it.first;
    }
    return answer;
}
