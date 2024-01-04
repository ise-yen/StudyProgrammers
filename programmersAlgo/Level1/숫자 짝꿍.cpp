#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    map<char, int> m1;
    map<char, int> m2;
    for(int i = 0; i < X.length(); i++){
        auto it = m1.find(X[i]);
        if(it == m1.end()){
            m1.insert({X[i], 1});
        }
        else{
            m1[X[i]]++;
        }
    }
    for(int i = 0; i < Y.length(); i++){
        auto it = m2.find(Y[i]);
        if(it == m2.end()){
            m2.insert({Y[i], 1});
        }
        else{
            m2[Y[i]]++;
        }
    }
    
    bool isAll0 = true;
    vector<char> vc;
    for(auto it : m1){
        char c = it.first;
        auto it2 = m2.find(c);
        // 존재할 때
        if(it2 != m2.end()){
            int min = it.second < m2[c] ? it.second : m2[c];
            while(min > 0){
                if(c != '0') isAll0 = false;
                vc.push_back(c);
                min--;
            }
        }
    }
    
    if(vc.size() == 0) answer = "-1";
    else if(isAll0) answer = "0";
    else{
        sort(vc.begin(), vc.end());
        for(int i = vc.size()-1; i >= 0; i--){
            answer.push_back(vc[i]);
        }
    }
    return answer;
}
