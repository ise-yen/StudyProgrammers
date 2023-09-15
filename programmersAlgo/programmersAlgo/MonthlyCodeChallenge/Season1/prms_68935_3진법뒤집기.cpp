#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    while (n > 0) {
        v.push_back(n % 3);
        n /= 3;
    }

    // p: 3의 p제곱
    // idx: vector의 인덱스 위치
    for (int p = v.size() - 1, idx = 0; p >= 0, idx < v.size(); p--, idx++) {
        if (v[idx] != 0) answer += v[idx] * pow(3, p);
    }
    return answer;
}