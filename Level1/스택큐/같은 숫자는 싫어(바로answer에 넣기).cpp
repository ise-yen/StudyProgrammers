#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    stack<int> st;
    
    for(int a : arr)
        if(st.empty() || (!st.empty() && st.top() != a)) {
            st.push(a);
            answer.push_back(a);
        }
    
    return answer;
}
