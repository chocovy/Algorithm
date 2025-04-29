#include <bits/stdc++.h>
using namespace std;

int num[9], result[7];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i=0; i<9; i++) cin >> num[i];
    
    for (int i=0; i<8; i++){
        int sum  = 0;
        for (int j=0; j<9; j++){
            sum = 0;
            for (int k=0,count=0;k<9;k++) if(k!=i && k!=j) result[count++] = num[k];
            for(int i = 0; i < 7; i++) sum += result[i];
            
            if (sum==100) break;
        }
        if (sum==100) break;
    }

    sort(result, result+7);
    for(int i = 0; i < 7; i++) cout << result[i] << "\n";

}