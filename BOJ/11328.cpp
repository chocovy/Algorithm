#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    
    cin >> n;
    for(int i=0;i<n;i++){
        string s1, s2;
        cin >> s1 >> s2;

        int freq1[26] = {};
        int freq2[26] = {};
        int cnt = 0;

        for(auto c : s1) freq1[c-'a']++;
        for(auto c : s2) freq2[c-'a']++;

        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]) cnt++;
        }

        if (cnt) cout << "Impossible\n";
        else cout << "Possible\n";
    }
}