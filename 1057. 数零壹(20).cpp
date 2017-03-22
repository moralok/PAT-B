#include<iostream>
#include<string>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		if (isalpha(s[i])) {
			s[i] = toupper(s[i]);
			sum += (s[i] - 'A' + 1);
		}
	}

	int count_0 = 0, count_1 = 0;
	while (sum != 0) {
		if (sum % 2 == 0) {
			count_0++;
		}
		else {
			count_1++;
		}
		sum = sum / 2;
	}
	cout << count_0 << " " << count_1;
}