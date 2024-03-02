#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

bool compare(int i, int j){
    return i > j;
}

// compare 사용
string solution1(string s) {
    sort(s.begin(), s.end(), compare);
    return s;
}

// greater
string solution2(string s) {
    sort (s.begin(), s.end(), greater<char>());
    return s;
}

// rebegin(), reend()
string solution3(string s) {
    sort(s.rbegin(),s.rend());
    return s;
}
