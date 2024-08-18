#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    while(n > 0) {
        answer += (n % 2 == 1 ? n : pow(n, 2));
        n -= 2;
    }
    return answer;
}
