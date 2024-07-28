#include <string>
#include <algorithm>

using namespace std;

string solution(string str) {
    transform(str.begin(), str.end(), str.begin(), [](char c){return tolower(c);});
    return str;
}
