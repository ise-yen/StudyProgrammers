#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool flag(int i, int j){
    return i > j;
}

vector<int> solution(vector<int> num_list) {
    sort(num_list.begin(), num_list.end(), flag);
    
    for(int i = 0; i < 5; i++)
        num_list.pop_back();
    
    sort(num_list.begin(), num_list.end());
    
    return num_list;
}
