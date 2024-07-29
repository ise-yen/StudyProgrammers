#include <numeric>
#include <vector>

using namespace std;

int multiple(vector<int> *v){
    int res = 1;
    for(int i = 0; i < v->size(); i++)
        res *= v->at(i);
    return res;
}

int solution(vector<int> v) {
    int s = v.size();
    return s > 10 ? accumulate(v.begin(), v.end(), 0) : multiple(&v);
}
