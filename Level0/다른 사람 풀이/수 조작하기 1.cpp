#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(int n, string control) {
    unordered_map<char, int> um = {{'w', 1}, {'s', -1}, {'d', +10}, {'a', -10}};
    for(char ch : control) n += um[ch];
    return n;
}
