#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    stack <int> S;
    int n, a, sum=0;

    cin >> n;
    while(n--){
        cin >> a;
        if (a == 0){
            if (!S.empty()) S.pop();
        }
        else S.push(a);
    }

    while(!S.empty()){
        sum += S.top();
        S.pop();
    }
    cout << sum;
}