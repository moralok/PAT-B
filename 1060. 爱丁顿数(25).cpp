#include <iostream>
#include <algorithm>

using namespace std;

int cmp(int a, int b) {
	return a > b;
}

int main() {
	int n;
	cin >> n;
	int *a = new int [n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n, cmp);
	int p = 0;
	while (a[p] > p + 1) {
		p++;

	}
	cout << p;
}