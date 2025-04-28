#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, max=0, index;

    for (int i=0; i<9; i++){
        cin >> a;
        if(max < a){
            max = a;
            index = i+1;
        }
    }
    cout << max << "\n" << index;
    return 0;
}