#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while(n--){
        string str;
        stack <char> s;
        bool valid = true;
        cin >> str;
        for(char c : str){
            if(c == '(') s.push(c);
            else if (c == ')'){
                if (!s.empty() && s.top() == '(') s.pop();
                else {
                    valid = false;
                    break;
                }
            }
        }
        if(valid && s.empty()) cout << "YES\n";
        else cout << "NO\n";
    }
}