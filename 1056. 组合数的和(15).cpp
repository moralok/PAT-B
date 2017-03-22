#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> num(n);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	/**
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j) {
				sum = sum + num[i] * 10 + num[j];
			}
		}
	}
	*/
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + num[i];
	}
	sum = sum * (n - 1) * 11;
	cout << sum;
}