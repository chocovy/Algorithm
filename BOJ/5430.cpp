#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        deque <int> dq;
        string p, s, num;
        int n;
        bool err=false, rev=false;
        cin >> p;
        cin >> n;
        cin >> s;

        for (char c : s) {
            if (isdigit(c)) {
                num += c;
            } else {
                if (!num.empty()) {
                    dq.push_back(stoi(num));
                    num.clear();
                }
            }
        }

        for(char c: p){
            if(c == 'R') rev = !rev;
            else if(c == 'D'){
                if(!dq.empty() && rev) dq.pop_back();
                else if(!dq.empty() && !rev) dq.pop_front();
                else {
                    err = true;
                    cout << "error\n";
                    break;
                }
            }
        }
        if(!err){
            if(rev) reverse(dq.begin(), dq.end());
            cout << '[';
            for(int i = 0; i < dq.size(); i++)
            {
              cout << dq[i];
              if(i+1 != dq.size())
                cout << ',';
            }
            cout << "]\n";
        }

    }

}