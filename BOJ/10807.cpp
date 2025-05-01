#include <bits/stdc++.h>
using namespace std;

int n, v, a[201];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> v;
        a[100+v]++;
    }

    cin >> v;
    cout << a[100+v];

}