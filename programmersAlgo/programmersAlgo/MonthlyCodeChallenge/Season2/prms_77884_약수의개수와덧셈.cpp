#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for (int num = left; num <= right; num++) {
        int N = (int)sqrt(num);
        int cnt = 0;
        for (int i = 1; i <= N; i++) {
            if (N % i != 0) continue;
            // 약수의 개수
            if (num == i * i) cnt++;
            else cnt += 2;
        }
        if (cnt % 2 == 0) answer += num;
        else answer -= num;
    }
    return answer;
}