#include <string>
#include <algorithm>

using namespace std;

string solution(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}
