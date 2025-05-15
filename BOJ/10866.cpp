#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    deque <int> dq;
    int n,a;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s == "push_front") {
            cin >> a;
            dq.push_front(a);
        }
        else if (s == "push_back"){
            cin >> a;
            dq.push_back(a);
        }
        else if(s == "pop_front"){
            if (!dq.empty()){
                cout << dq.front() << "\n";
                dq.pop_front();
            }
            else cout << -1 << "\n";
        }
        else if(s == "pop_back"){
            if (!dq.empty()){
                cout << dq.back() << "\n";
                dq.pop_back();
            }
            else cout << -1 << "\n";
        }
        else if(s == "size") cout << dq.size() << "\n";
        else if(s == "empty") cout << dq.empty() << "\n";
        else if(s == "front"){
            if (!dq.empty()){
                cout << dq.front() << "\n";
            }
            else cout << -1 << "\n";
        }
        else if(s == "back"){
            if (!dq.empty()){
                cout << dq.back() << "\n";
            }
            else cout << -1 << "\n";
        }
    }
}