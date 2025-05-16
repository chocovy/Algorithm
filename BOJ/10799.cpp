#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt = 0;
    string str;
    cin >> str;
    int sz = str.length();

    stack <char> s;
    for (int i = 0; i < sz; i++){
        if(str[i] == '(') s.push(str[i]);
        else {
            if(str[i-1] == '('){
                s.pop();
                cnt += s.size();
            }
            else{
                s.pop();
                cnt++;
            }
        }
    }
    cout << cnt;
}