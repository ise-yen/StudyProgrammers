#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++){
        // insert(iterator position, size_type n, const T& x);
        answer.insert(answer.end(), arr[i], arr[i]); // answer.end()에 arr[i] 개만큼 arr[i]를 삽입
    }
    return answer;
}
