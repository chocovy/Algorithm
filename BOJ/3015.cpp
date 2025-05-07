#include <bits/stdc++.h>
using namespace std;
stack <pair<int, int>> s;
long long ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int h;
        cin >> h;
        int cnt = 1;
        while(!s.empty() && s.top().first <= h){
            ans += s.top().second;
            if(s.top().first == h) cnt += s.top().second;
            s.pop();
        }
        if(!s.empty()) ans++;
        s.push({h, cnt});
    }
    cout << ans;
}