#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> split(string input, char del){
    vector<string> answer;
    stringstream ss(input);
    string tmp;
    while(getline(ss, tmp, del)){
        answer.push_back(tmp);
    }
    
    return answer;
}

string solution(string s) {
    string answer = "";
    vector<string> vs = split(s, ' ');
    
    vector<int> vi;
    for(int i = 0; i < vs.size(); i++){
        vi.push_back(stoi(vs[i]));
    }
    
    sort(vi.begin(), vi.end());
    string min = to_string(vi[0]);
    string max = to_string(vi[vi.size()-1]);
    answer = min + " " + max;
    return answer;
}
