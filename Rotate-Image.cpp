#include<iostream>
using namespace std;
int main() {
	int a[1000];
	int i, n;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	int key;
	cin >> key;
	for (i = 0; i < n; i++) {
		if (a[i] == key) {
			cout << i;
			break;
		}
	}
	if (i == n) {
		cout << "-1";

	}
	return 0;
}