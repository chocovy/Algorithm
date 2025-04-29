#include <bits/stdc++.h>
using namespace std;

int a,b,y,m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a;
    for (int i=0;i<a;i++){
        cin >> b;
        y += 10 * (b / 30 + 1);
        m += 15 * (b / 60 + 1);
    }
    
    if (y < m) cout << "Y " << y;
    else if(y > m) cout << "M " << m;
    else cout << "Y M " << y;
}