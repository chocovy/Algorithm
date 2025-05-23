#include <bits/stdc++.h>
using namespace std;
int dist[1000002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    fill(dist,dist+100002,-1);
    dist[n] = 0;
    queue <int> q;
    q.push(n);
    while(!q.empty()){
        auto cur = q.front();
        q.pop();
        for (int nxt : {cur-1, cur+1, cur*2}){
            if (nxt < 0 || nxt >= 100002) continue;
            if (dist[nxt] != -1) continue;
            dist[nxt] = dist[cur] + 1;
            q.push(nxt);
        }
    }
    cout << dist[k];
}