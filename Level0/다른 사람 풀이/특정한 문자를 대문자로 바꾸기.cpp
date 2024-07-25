#include <string>

using namespace std;

string solution(string str, string alp) {
    int t = 'A' - 'a';
    for(int it = str.find(alp); it != -1; it = str.find(alp)){
        str.replace(it, 1, 1, alp[0] + t);
    }
    return str;
}
