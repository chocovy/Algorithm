#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        string s;
        getline(cin,s);
        if(s == ".") break;

        stack <char> S;
        bool err = true;

        for(char c : s){
            if(c == '[' || c == '(') S.push(c);
            else if(c == ']'){
                if(!S.empty() && S.top() == '[') S.pop();
                else{
                    err = false;
                    break;
                }
            }
            else if(c == ')'){
                if(!S.empty() && S.top() == '(') S.pop();
                else{
                    err = false;
                    break;
                }

            }
        }
        if (!S.empty()) err = false;

        if(err) cout << "yes\n";
        else cout << "no\n";
    }
}