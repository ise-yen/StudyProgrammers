#include <vector>
#include <cmath>

using namespace std;

const int MAX = 1000001;

int map[MAX]{-1, -1, 0, };
vector<int> prime;
void eratos(int N){
    for(int n = 2; n <= N; n++){
        if(map[n] != 0) continue;
        bool isPrime = true;
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                isPrime = false;
                break;
            }
        }
        if(!isPrime) map[n] = -1;
        else{
            prime.push_back(n);
            map[n] = 1;
            for(int i = n + n; i <= N; i += n){
                map[i] = -1;
            }
        }
    }
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int G = 1, L = 1;
    int big = n > m ? n : m;
    int small = n < m ? n : m;
    eratos(big);
    
    if(map[n] == 1 && map[m] == 1){ // 서로소라면
        G = 1;
        L = n * m;
    }
    else{
        int p = 0;
        while(G <= small && p < prime.size()){
            if(n % prime[p] == 0 && m % prime[p] == 0){
                G *= prime[p];
                n /= prime[p];
                m /= prime[p];
                if(n == 1 || m == 1) break;
            }
            else p++;
        }
        L = G * n * m;
    }
    
    answer.push_back(G);
    answer.push_back(L);
    return answer;
}
