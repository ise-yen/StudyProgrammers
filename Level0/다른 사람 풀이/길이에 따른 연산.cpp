#include <numeric>
#include <vector>

using namespace std;

int solution(vector<int> v) {
    int s = v.size();
    return s > 10 ? accumulate(v.begin(), v.end(), 0) : accumulate(v.begin(), v.end(), 1, multiplies<int>());
}
