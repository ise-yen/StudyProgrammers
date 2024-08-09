#include <string>
#include <vector>

using namespace std;

int solution(string str, string pre) {
    return pre == str.substr(0, pre.size());
}
