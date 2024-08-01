#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int n) {
    int sum = {};
    for(auto num : numbers){
        if(sum <= n) sum += num;
        else break;
    }
    return sum;
}
