#include <bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int m, n, k;
        int x, y;
        int cnt = 0;
        cin >> m >> n >> k;
        int arr[52][52] = {0};
        int vis[52][52] = {0};
        while(k--){
            cin >> x >> y;
            arr[y][x] = 1;
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (arr[i][j] == 1 && vis[i][j] == 0){
                    queue <pair<int,int>> q;
                    q.push({i, j});
                    cnt++;
                    while(!q.empty()){
                        auto cur = q.front();
                        q.pop();
                        for (int dir = 0; dir < 4; dir++){
                            int nx = cur.first + dx[dir];
                            int ny = cur.second + dy[dir];
                            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                            if(vis[nx][ny] == 1 || arr[nx][ny] != 1) continue;
                            vis[nx][ny] = 1;
                            q.push({nx, ny});
                        }    
                    }
                }

            }
        }
        cout << cnt << "\n";
    }

}