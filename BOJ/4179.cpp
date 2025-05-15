#include <bits/stdc++.h>
using namespace std;

string s[1002];
int dist1[1002][1002];
int dist2[1002][1002];  
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int r, c;
    cin >> r >> c;

    for (int i = 0; i < r; i++) {
        cin >> s[i];
        fill(dist1[i], dist1[i] + c, -1);
        fill(dist2[i], dist2[i] + c, -1);
    }

    queue<pair<int, int>> q;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (s[i][j] == 'F') {
                q.push({i, j});
                dist1[i][j] = 0;
            }
        }
    }

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if (nx < 0 || ny < 0 || nx >= r || ny >= c) continue;
            if (s[nx][ny] == '#' || dist1[nx][ny] != -1) continue;
            dist1[nx][ny] = dist1[cur.first][cur.second] + 1;
            q.push({nx, ny});
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (s[i][j] == 'J') {
                q.push({i, j});
                dist2[i][j] = 0;
            }
        }
    }

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || ny < 0 || nx >= r || ny >= c) {
                cout << dist2[cur.first][cur.second] + 1 << '\n';
                return 0;
            }

            if (s[nx][ny] == '#' || dist2[nx][ny] != -1) continue;
            if (dist1[nx][ny] != -1 && dist1[nx][ny] <= dist2[cur.first][cur.second] + 1) continue;

            dist2[nx][ny] = dist2[cur.first][cur.second] + 1;
            q.push({nx, ny});
        }
    }

    cout << "IMPOSSIBLE\n";
}
