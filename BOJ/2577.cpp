#include <bits/stdc++.h>
using namespace std;

int A, B, C, result;
int arr[10];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> A >> B >> C;
    result = A * B * C;

    while(result > 0){
        arr[result % 10] += 1;
        result /= 10;
    }
    
    for(int i=0;i<10;i++) cout << arr[i] << "\n";
}