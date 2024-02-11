#include <vector>
#include <cmath>

using namespace std;

int eratos(int N){
    vector<int> era;
    for(int i = 2; i <= N; i++){
        bool isPrime = true;
        for(int e : era){
            if(i % e == 0){
                isPrime = false;
                break;
            }
            if(e > sqrt(i)) break;
        }
        if(isPrime) era.push_back(i);
    }
    return era.size();
}

int solution(int N) {
    int answer = 0;
    answer = eratos(N);
    return answer;
}
