#include <string>

using namespace std;

int solution(string myString, string pat) {
    string str;
    for(int i = 0; i < pat.size(); i++){
        if(pat[i] == 'A') str.push_back('B');
        else if(pat[i] == 'B') str.push_back('A');
    }
    
    if(myString.find(str) == string::npos) return false;
    else return true;
}
