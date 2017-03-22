#include<iostream>
#include<algorithm>

using namespace std;

int cmp(int a, int b) {
	return a > b;
}

int main() {
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		int t = a[i];
		while (t != 1) {
			if (t % 2 == 0) {
				t = t / 2;
			}
			else {
				t = (3 * t + 1) / 2;
			}
			for (int j = 0; j < n; j++) {
				if (t == a[j]) {
					a[j] = 1000;
				}
			}
		}
	}

	sort(a, a + n, cmp);
	int temp = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] != 1000) {
			temp = i;
		}
	}
	for (int i = temp; i < n - 1; i++) {
		cout << a[i] << " ";
	}
	cout << a[n - 1];
	delete[]a;
}