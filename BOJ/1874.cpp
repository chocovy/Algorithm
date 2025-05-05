#include <bits/stdc++.h>
using namespace std;
int n;
stack <int> S;
string result;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;

    int cnt = 1;
    while(n--){
        int a;
        cin >> a;
        while(cnt <= a){
            S.push(cnt++);
            result += "+\n";
        }
        if (S.top() != a){
            cout << "NO\n";
            return 0;
        }
        S.pop();
        result += "-\n";
    }
    cout << result;
}