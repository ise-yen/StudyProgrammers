#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int G = 1, L = 1;
    int big = n > m ? n : m;
    int small = n < m ? n : m;
    for(int i = small; i >= 1; i--){
        if(n % i == 0 && m % i == 0){
            G *= i;
            n /= i;
            m /= i;
            if(n == 1 || m == 1) break;
        }
    }
    L = G * n * m;
    
    answer.push_back(G);
    answer.push_back(L);
    return answer;
}
