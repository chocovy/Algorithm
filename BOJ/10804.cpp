#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, card[20];
    for (int i=0;i<20;i++) card[i] = i+1;

    for(int i=0;i<10;i++){
        cin >> a >> b;
        reverse(card+a-1, card+b);
    }
    for (int i=0;i<20;i++) cout << card[i]  << " ";
}