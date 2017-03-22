#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int len = s.length();
	int sum = 0;
	for (int i = 0; i < len; i++) {
		sum += s[i] - '0';
	}
	string num[10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	int *b = new int[4];
	int j = 0;
	if (sum == 0) {
		cout << num[0];
	}
	else {
		while (sum != 0) {
			b[j++] = sum % 10;
			sum = sum / 10;
		}
	}
	for (int i = j - 1; i >= 1; i--) {
		cout << num[b[i]] << " ";
	}
	cout << num[b[0]];

	delete[]b;


}