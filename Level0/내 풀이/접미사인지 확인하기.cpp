#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int strS = my_string.size();
    int ss = is_suffix.size();
    return strS < ss ? 0 : my_string.substr(strS - ss, ss) == is_suffix;
}
