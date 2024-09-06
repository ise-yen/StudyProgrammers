#include <string>
#include <vector>
#include <numeric>
#include <numeric>

using namespace std;

int solution(vector<int> v) {
    int odd{}, even{};
    for(int i = 0; i < v.size(); i++)
        (i%2 == 1) ? odd += v[i] : even += v[i];
    
    return max(odd, even);
}

int solution2(vector<int> v) {
    return max(
        accumulate(v.begin(), v.end(), 0,
                   [i=0](int acc, int val) mutable{
                       int res = (i%2!=0) ? acc+val : acc; i++; return res;}), 
        accumulate(v.begin(), v.end(), 0,
                   [i=0](int acc, int val) mutable{
                       int res = (i%2!=1) ? acc+val : acc; i++; return res;})
        );
}
