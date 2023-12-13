#include <string>
#include <iostream>
#include <vector>

using namespace std;

bool isInMap(int r, int c, int N, int M){
    if(r < 0 || c < 0 || r >= N || c >= M) return false;
    else return true;
}

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    
    int N = park.size();
    int M = park[0].size();
    
    int sr = -1, sc = -1;
    
    for(int i = 0; i < park.size(); i++){
        for(int j = 0; j < park[i].length(); j++){
            char c = park[i][j];
            if(c == 'S'){
                sr = i;
                sc = j;
                break;
            }
        }
        if(sr != -1 && sc != -1) break;
    }
    
    for(int i = 0; i < routes.size(); i++){
        char cDir = routes[i][0];
        int cnt = routes[i][2] - '0';
        if(cDir == 'N'){
            if(isInMap(sr-cnt, sc, N, M)){
                bool flag = true;
                for(int k = 1; k <= cnt; k++){
                    if(park[sr-k][sc] == 'X'){
                        flag = false;
                    }
                }
                if(flag) sr -= cnt;
            }
        }
        else if(cDir == 'S'){
            if(isInMap(sr+cnt, sc, N, M)){
                bool flag = true;
                for(int k = 1; k <= cnt; k++){
                    if(park[sr+k][sc] == 'X'){
                        flag = false;
                    }
                }
                if(flag) sr += cnt;
            }
        }
        else if(cDir == 'W'){
            if(isInMap(sr, sc-cnt, N, M)){
                bool flag = true;
                for(int k = 1; k <= cnt; k++){
                    if(park[sr][sc-k] == 'X'){
                        flag = false;
                    }
                }
                if(flag) sc -= cnt;
            }
        }
        else if(cDir == 'E'){
            if(isInMap(sr, sc+cnt, N, M)){
                bool flag = true;
                for(int k = 1; k <= cnt; k++){
                    if(park[sr][sc+k] == 'X'){
                        flag = false;
                    }
                }
                if(flag) sc += cnt;
            }
        }
        else{}
        
        cout << sr << " " << sc << "\n";
    }
    
    answer.push_back(sr);
    answer.push_back(sc);
    
    
    return answer;
}
