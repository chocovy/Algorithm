#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, m;

    cin >> a >> b >> c;

    if (a==b && b==c) m = 10000 + a * 1000;
    else if (a==b || a==c) m = 1000 + a * 100;
    else if (b==c) m = 1000 + b * 100;
    else m = max({a,b,c}) * 100;
    cout << m;

    return 0;
}