#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
  
	int a, b, c;
	cin >> a >> b;
	
	for (int i = 0; i < a; i++) {
		cin >> c;
		if(c < b) cout << c << " ";
	}
  
	return 0;
}
