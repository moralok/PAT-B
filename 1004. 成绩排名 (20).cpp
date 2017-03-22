#include<iostream>
#include<string>

using namespace std;

int main() {
	int n;
	cin >> n;
	int max = -1, min = 101, score;
	string maxName, maxNumber, minName,minNumber, name, number;

	for (int i = 0; i < n; i++) {
		cin >> name >> number >> score;
		if (max < score) {
			max = score;
			maxName = name;
			maxNumber = number;
		}
		if (min > score) {
			min = score;
			minName = name;
			minNumber = number;
		}
	}
	cout << maxName << " " << maxNumber << endl;
	cout << minName << " " << minNumber << endl;

}