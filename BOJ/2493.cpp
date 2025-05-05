#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n+1];
    for(int i=1;i<n+1;i++){
        cin >> a[i];
    }
    for(int i=1;i<n+1;i++){
        int b = i,cnt = 0;
        while(cnt){
            if(a[i] < a[b-1]){
                cnt = 1;
                cout << b;
            }
            else b--;
        }
        cout << 0;
    }
}