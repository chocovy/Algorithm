#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    deque <int> dq;
    int n, m, cnt=0;
    cin >> n >> m;
    for(int i=1;i<=n;i++) dq.push_back(i);

    while(m--){
        int a;
        cin >> a;
        int idx = find(dq.begin(), dq.end(), a) - dq.begin();
        while(a != dq.front()){
            if (idx < dq.size() - idx) { 
                dq.push_back(dq.front());
                dq.pop_front();
              }
              else {
                dq.push_front(dq.back());
                dq.pop_back();
              }
            cnt++;
        }
        dq.pop_front();
    }
    cout << cnt;
}