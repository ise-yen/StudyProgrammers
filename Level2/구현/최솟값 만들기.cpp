#include <vector>
#include <algorithm>

using namespace std;

bool compare(int i, int j){
    if(i > j) return true;
    else return false;
}

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), compare);
    // compare 없이 rbegin이나 rend()로 내림차순 가능
    //sort(B.rbegin(), B.rend());
    
    for(int i = 0; i < A.size(); i++){
        answer += A[i] * B[i];
    }
    return answer;
}
