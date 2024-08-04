#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> v, int n) {
    rotate(v.begin(), v.begin() + n, v.end());
    return v;
}
