#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a[5];
    int sum=0;

    for (int i=0;i<5;i++) cin >> a[i];

    for (int i=0;i<5;i++) sum += a[i];

    sort(a,a+5);
    cout << sum / 5 << "\n" << a[2];

}