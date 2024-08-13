#include <iostream>
#include <vector>

using namespace std;

long long answer = 0;
void dfs(int now, int n){
    if(now > n) return;
    if(now == n) {
        answer++;
        return;
    }
    
    dfs(now+1, n);
    
    dfs(now+2, n);
}

long long solution(int n) {
    dfs(0, n);
    return answer % 1234567;
}
