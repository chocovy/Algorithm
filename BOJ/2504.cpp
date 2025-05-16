#include <bits/stdc++.h>
using namespace std;

stack<char> s;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum = 0;
    int num = 0;

    string str;
    cin >> str;

    for(int i=0; i< str.size(); i++){
        if(str[i] == '(') {
            s.push(str[i]);
            num *= 2;
        }
        else if(str[i == '[']){
            s.push(str[i]);
            num *= 3;
        }
        else if(str[i] == ')'){
            if(s.empty() || s.top() != '('){
                cout << 0;
                return 0;
            }
        }

    }
}