#include <string>
#include <algorithm>

using namespace std;

string solution(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for(int it = str.find('a'); it != -1; it = str.find('a')){
        str.replace(it, 1, 1, 'A');
    }
    return str;
}
