#include <bits/stdc++.h>
using namespace std;

int arr[502][502];
bool vis[502][502];
queue <pair<int,int>> q;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int mx, cnt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(arr[i][j] == 1 && vis[i][j] == 0){
                int m1 = 0;
                vis[i][j] = 1;
                q.push({i,j});
                cnt++;
                while(!q.empty()){
                    pair<int,int> cur = q.front();
                    q.pop();
                    m1++;
                    for (int dir = 0; dir < 4; dir++){
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];
                        if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                        if(vis[nx][ny] || arr[nx][ny] != 1) continue;
                        vis[nx][ny] = 1;
                        q.push({nx,ny});
                    }
                }
                mx = max(mx, m1);
            }
        }
    }
    cout << cnt << "\n" << mx;
}