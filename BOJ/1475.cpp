#include <bits/stdc++.h>
using namespace std;

int N, ans, arr[10];


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    
    while(N > 0){
        arr[N%10]++;
        N /= 10;       
    }

    for(int i=0; i<10; i++){
        if(i==6 || i==9) continue;
        ans = max(ans, arr[i]);
    }
    ans = max(ans, (arr[6]+arr[9]+1)/2);
    cout << ans ;
}