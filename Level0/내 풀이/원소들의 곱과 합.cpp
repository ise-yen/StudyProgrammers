#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int sum{};
    int mul = 1;
    for(int n : num_list){
        sum += n;
        mul *= n;
    }
    
    return mul < pow(sum, 2);
}
