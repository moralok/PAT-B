#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main() {
	int n;
	cin >> n;
	double max = 0;
	int real, imag;
	for (int i = 0; i < n; i++) {
		cin >> real >> imag;
		if (max < sqrt((pow(real, 2) + pow(imag, 2)))) {
			max = sqrt((pow(real, 2) + pow(imag, 2)));
		}
	}

	cout << fixed << setprecision(2) << max;
}