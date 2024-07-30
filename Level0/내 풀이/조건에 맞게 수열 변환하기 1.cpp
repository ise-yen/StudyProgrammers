#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    transform(arr.begin(), arr.end(), arr.begin(), [](int i){return (i >= 50 && i % 2 == 0) ? i / 2 : (i < 50 && i % 2 == 1) ? i * 2 : i;});
    return arr;
}
