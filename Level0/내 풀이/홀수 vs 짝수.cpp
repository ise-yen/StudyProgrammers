#include <string>
#include <vector>
#include <numeric>
#include <numeric>

using namespace std;

int solution(vector<int> v) {
    int odd{}, even{};
    for(int i = 0; i < v.size(); i++)
        (i%2 == 1) ? odd += v[i] : even += v[i];
    
    return max(odd, even);
}
