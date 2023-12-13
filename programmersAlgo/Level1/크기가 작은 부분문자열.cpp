#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    long long pi = stoi(p);
    for(int i = 0; i <= t.length() - p.length(); i++){
        if(t[i] <= p[0]){
            string tmp = t.substr(i, p.length());
            int ti = stoi(tmp);
            if(ti <= pi) answer++;
            
            cout << "\n" << tmp << " : " << ti;
        }
    }
    return answer;
}
