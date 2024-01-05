#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;

    int cnt{}; // 이진 변환 횟수
    int cntZero{}; // 제거된 0의 개수

    // 0 제거
    while (s.length() > 1) {
        vector<char> v;
        cnt++;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') v.push_back(s[i]);
            else cntZero++;
        }

        // 0을 제거한 길이를 2진법으로 표현한 문자열로 바꾸기
        int c = v.size(); // 0을 제거한 길이
        s.erase(0, s.length());

        stack<char> st;
        while (c > 0) {
            st.push(c % 2 + '0');
            c /= 2;
        }

        while (!st.empty()) {
            s.push_back(st.top());
            st.pop();
        }
        cout << s << "\n";
    }

    answer.push_back(cnt);
    answer.push_back(cntZero);

    return answer;
}