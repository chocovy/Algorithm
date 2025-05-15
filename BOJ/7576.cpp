#include <bits/stdc++.h>
using namespace std;
int arr[1001][1001];
int dx[4] = {-1 ,0, 1, 0};
int dy[4] = {0 ,-1, 0, 1};


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    queue <pair<int,int>> q;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(arr[i][j] == 1){
                q.push({i, j});
            }
        }
    }
    while(!q.empty()){
        pair <int,int> cur = q.front();
        q.pop();
        for (int dir = 0; dir < 4; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (arr[nx][ny] != 0) continue;
            arr[nx][ny] = arr[cur.first][cur.second] + 1;
            q.push({nx, ny});
        }
    } 

    int result = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                cout << -1 << '\n';
                return 0;
            }
            result = max(result, arr[i][j]);
        }
    }    
    cout << result - 1;
}