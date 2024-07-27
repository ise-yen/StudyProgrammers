#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> str) {
    for(int i = 0; i < str.size(); i++){
        i % 2 == 1 ?
            transform(str[i].begin(), str[i].end(), str[i].begin(), [](char c){return toupper(c);}) :
            transform(str[i].begin(), str[i].end(), str[i].begin(), [](char c){return tolower(c);});
    }
    return str;
}
