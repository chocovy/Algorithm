#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, count=0;

    for(int i=0;i<3;i++){
        count = 0;
        for(int j=0;j<4;j++){
            cin >> a;
            if (a==1) count ++;
            }
        if(count==3) cout << "A\n";
        else if(count==2) cout << "B\n";
        else if(count==1) cout << "C\n";
        else if(count==0) cout << "D\n";
        else if(count==4) cout << "E\n";
    }
}