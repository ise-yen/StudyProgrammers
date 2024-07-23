#include <string>
#include <vector>

using namespace std;

string solution(string str) {
    auto it = str.find("m");
    while(it < str.size()){
        str.erase(it, 1);
        str.insert(it, "rn");
        it = str.find("m");
    }
    return str;
}
