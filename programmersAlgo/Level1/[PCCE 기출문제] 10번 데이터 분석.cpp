#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int findFlag(string ext){
    int flag{};
    
    if(ext == "code"){
        flag = 0;
    }
    else if(ext == "date"){
        flag = 1;
    }
    else if(ext == "maximum"){
        flag = 2;
    }
    else if(ext == "remain"){
        flag = 3;
    }
    else{}
    
    return flag;
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    
    vector<pair<int, int>> v;
    for(int i = 0; i < data.size(); i++){
        int flag = findFlag(ext);
        int sortFlag = findFlag(sort_by);
        if(data[i][flag] < val_ext) v.push_back({data[i][sortFlag], i});
    }
    
    sort(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); i++){
        int n = v[i].second;
        vector<int> ans;
        for(int j = 0; j < data[n].size(); j++){
            ans.push_back(data[n][j]);
        }
        answer.push_back(ans);
    }
    return answer;
}
