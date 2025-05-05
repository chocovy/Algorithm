#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    stack <int> S;
    int n, a;
    string s;

    cin >> n;
    
    while(n--){
        cin >> s;
        if (s == "push"){
            cin >> a;
            S.push(a);
        }
        else if(s == "pop"){
            if(!S.empty()){
                cout << S.top() << "\n";
                S.pop();
            } else {
                cout << -1 << "\n";
            }
        }   
        else if(s == "size"){
            cout << S.size() << "\n";
        }
        else if(s == "empty"){
            if(S.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else{
            if(!S.empty()) cout << S.top() << "\n";
            else cout << -1 << "\n";
        }
    }
}