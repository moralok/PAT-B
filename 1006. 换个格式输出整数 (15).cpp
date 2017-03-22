#include<iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	int *a = new int[3];
	int i = 0;
	while (num != 0) {
		a[i++] = num % 10;
		num = num / 10;
	}
	for (int k = 0; k < a[2]; k++) {
		cout << "B";
	}
	for (int k = 0; k < a[1]; k++) {
		cout << 'S';
	}
	for (int k = 0; k < a[0]; k++) {
		cout << k+1;
	}
	delete[]a;
}