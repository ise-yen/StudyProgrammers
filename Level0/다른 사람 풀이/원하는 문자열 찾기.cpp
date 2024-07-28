#include <string>
#include <algorithm>

using namespace std;

int solution(string str, string pat) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    transform(pat.begin(), pat.end(), pat.begin(), ::tolower);
    return str.find(pat) != string::npos;
}
