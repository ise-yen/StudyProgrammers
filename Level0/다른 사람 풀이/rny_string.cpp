#include <string>
#include <regex>

using namespace std;

string solution1(string str) {
    return regex_replace(str, regex("m"), "rn");
}

string solution2(string str) {
    for(int it = str.find("m"); it != -1; it = str.find("m")){
        if(it != string::npos) str.replace(it, 1, "rn");
    }
    return str;
}
