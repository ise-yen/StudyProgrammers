#include<vector>
#include<queue>

using namespace std;

int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool isInMap(int r, int c, int R, int C){
    if(r >= 0 && r < R && c >= 0 && c < C) return true;
    return false;
}

int bfs(vector<vector<int>> &maps){
    int R = maps.size();
    int C = maps[0].size();

    vector<int> v(C, -1);
    vector<vector<int>> visit(R, v);

    int r = 0, c = 0;
    queue<pair<int, int>> q;
    q.push({r, c});
    visit[r][c] = 1;

    while(!q.empty()){
        r = q.front().first;
        c = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nr = r + dir[i][0];
            int nc = c + dir[i][1];
            
            if(!isInMap(nr, nc, R, C)) continue; // 범위 벗어나면 패스
            if(maps[nr][nc] != 1) continue; // 막힌 곳이면 패스
            if(visit[nr][nc] >= 0) continue; // 방문한 곳이면 패스
            
            q.push({nr, nc});
            visit[nr][nc] = visit[r][c] + 1;
        }
    }
    return visit[R-1][C-1];
}

int solution(vector<vector<int>> maps)
{
    return bfs(maps);
}
