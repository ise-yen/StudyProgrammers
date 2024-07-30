#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    for(auto i : arr)
        i = (i & 1) ? (i < 50 ? i << 2 : i) : (i >= 50 ? i >> 2 : i);
    return arr;
}
