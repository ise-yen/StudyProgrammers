#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    int sr = wallpaper.size()+1, sc = -1, er = -1, ec = -1;

    for(int i = 0; i < wallpaper.size(); i++){
        for(int j = 0; j < wallpaper[i].size(); j++){
            int s = wallpaper[i].size();
            if(s > sc) sc = s;
        }
    }
    
    for(int i = 0; i < wallpaper.size(); i++){
        for(int j = 0; j < wallpaper[i].size(); j++){
            if(wallpaper[i][j] == '#'){
                if(i < sr) sr = i;
                if(j < sc) sc = j;
                if(i > er) er = i;
                if(j > ec) ec = j;
            }
        }
    }
    
    er++;
    ec++;

    answer.push_back(sr);
    answer.push_back(sc);
    answer.push_back(er);
    answer.push_back(ec);
    return answer;
}
