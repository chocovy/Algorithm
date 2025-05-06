#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack <int> S;
    long long cnt=0;
    int N,h;
    cin >> N;
    int arr[N+1];

    while(N--){
        cin >> h;
        while(!S.empty() && S.top() < h){
            S.pop();
        }
        cnt += S.size();
        S.push(h);
    }
    cout << cnt;
}