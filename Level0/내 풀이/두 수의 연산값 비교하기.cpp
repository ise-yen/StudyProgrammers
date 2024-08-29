#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b) {
    int res = stoi(to_string(a) + to_string(b));
    return max(res, 2 * a * b);
}
