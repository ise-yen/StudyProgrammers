#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    stack<int> st;
    
    for(int i = arr.size() - 1; i >= 0; i--){
        if(st.empty() || (!st.empty() && st.top() != arr[i])) st.push(arr[i]);
}
           
    while(!st.empty()){
       answer.push_back(st.top());
        st.pop();
    }
    
    return answer;
}

// 118.42ms, 105MB
