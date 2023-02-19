#include<iostream>

using namespace std;
bool b(int m) {
	if (m < 2) { 
		return false; 
	}
	for (int i = 1; i * i < m; i++) {
		if (m % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int n; cin >> n;
	if (b(n)) {
		cout << "TAK";
	}
	else {
		cout << "NIE";
	}
}