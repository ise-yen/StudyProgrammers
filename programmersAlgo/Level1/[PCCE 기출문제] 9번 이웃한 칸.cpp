#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool isInMap(int r, int c, int N, int M){
    if(r < 0 || c < 0 || r >= N || c >= M) return false;
    else return true;
}

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    string color = board[h][w];
    int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int N = board.size();
    int M = board[0].size();
    for(int i = 0; i < 4; i++){
        int nr = h + dir[i][0];
        int nc = w + dir[i][1];
        
        if(isInMap(nr, nc, N, M)){
            if(color == board[nr][nc]) answer++;
        }
    }
    
    
    return answer;
}
