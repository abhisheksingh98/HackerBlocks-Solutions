#include<iostream>
using namespace std;

void bubbleSort(int a[], int n) {
	for (int itr = 0; itr < n; itr++) {
		for (int j = 0; j < n - itr - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}
int main() {
	int n;
	cin >> n;
	int a[10000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bubbleSort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	return 0;
}