#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    stack<int> st;
    
    for(int a : arr)
        if(st.empty() || (!st.empty() && st.top() != a)) st.push(a);
           
    while(!st.empty()){
       answer.push_back(st.top());
        st.pop();
    }
    
    reverse(answer.begin(), answer.end());
    return answer;
}
