#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i = 0; i < arr1.size(); i++){
        int x1 = arr1[i];
        int x2 = arr2[i];
        string tmp;
        tmp.resize(n, ' ');
        for(int j = n-1; j >= 0; j--){
            if(x1 == 0 && x2 == 0) break;
            if(x1 > 0)
                if(x1 % 2 == 1) tmp[j] = '#';
            if(x2 > 0)
                if(x2 % 2 == 1) tmp[j] = '#';
            x1 /= 2;
            x2 /= 2;
        }
        answer.push_back(tmp);
    }
    return answer;
}
