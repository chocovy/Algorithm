#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, sum=0, min=100;

    for(int i=0;i<7;i++){
        cin >> a;
        if (a & 1) {
            sum+=a;
            if (a < min) min = a; 
        }
    }
    if (sum==0) cout << -1;
    else cout << sum << "\n" << min;
}