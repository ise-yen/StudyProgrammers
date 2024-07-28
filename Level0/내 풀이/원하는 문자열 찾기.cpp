#include <string>
#include <algorithm>

using namespace std;

int solution(string str, string pat) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    transform(pat.begin(), pat.end(), pat.begin(), ::tolower);
    
    int s = str.size();
    int p = pat.size();

    if(s - p < 0) return 0;

    return str.find(pat) == string::npos ? 0 : 1;
}
