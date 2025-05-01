#include <bits/stdc++.h>
using namespace std;

int a[7], b[7];

int main(){
    int n, k, s, y, cnt=0;
    cin >> n >> k;

    for(int i=0; i<n; i++){
        cin >> s >> y;
        if(s) b[y]++;
        else a[y]++;
    }

    for(int i=1;i<7;i++){
        cnt += (a[i]+k-1)/k;
        cnt += (b[i]+k-1)/k;
    }

    cout << cnt;
}