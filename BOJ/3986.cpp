#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,cnt=0;
    cin >> n;
    while(n--){
        string str;
        stack <char> s;
        cin >> str;
        for(char c : str){
            if(c == 'A') {
                if(s.empty() || s.top() != 'A') s.push(c);
                else if(s.top() == 'A') s.pop(); 
            }
            else if(c == 'B') {
                if(s.empty() || s.top() != 'B') s.push(c);
                else if(s.top() == 'B') s.pop(); 
            }
        }
        if (!s.size()) cnt++;
    }
    cout << cnt;
}