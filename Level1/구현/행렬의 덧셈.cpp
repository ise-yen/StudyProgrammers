#include <string>
#include <vector>

using namespace std;

// 버전 1
vector<vector<int>> solution1(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    for(int i = 0; i < arr1.size(); i++){
        for(int j = 0; j < arr1[i].size(); j++){
            arr1[i][j] += arr2[i][j];
        }
    }
    return arr1;
}

// 버전 2
vector<vector<int>> solution2(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    for(int i = 0; i < arr1.size(); i++){
        vector<int> v;
        for(int j = 0; j < arr1[i].size(); j++){
            v.push_back(arr1[i][j] + arr2[i][j]);
        }
        answer.push_back(v);
    }
    return answer;
}
