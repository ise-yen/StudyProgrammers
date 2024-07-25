#include <string>

using namespace std;

string solution(string str, string alp) {
    int t = 'A' - 'a';
    for(int i = 0; i < str.size(); i++){
        if(str[i] == alp[0]) str[i] += t;
    }
    return str;
}
