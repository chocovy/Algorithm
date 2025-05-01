#include <bits/stdc++.h>
using namespace std;
int N, X, a[20000000];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, c=0;
    
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> t;
        a[t]++;
    }
    cin >> X;

    for(int i=1;i<(X+1)/2;i++){
        if (a[i]==1 && a[X-i]==1) c++;
    }
    cout << c;
}